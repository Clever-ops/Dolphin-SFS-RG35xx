
compiler    ?= gcc
OS          ?= $(shell uname -o)
EXE_EXT     :=
OBJ_EXT     := .o
STATIC_EXT  := .a
SHARED_EXT  := .so

SPACE :=
SPACE := $(SPACE) $(SPACE)

pathsearch = $(wildcard $(addsuffix /$(1),$(subst :, ,$(PATH))))
delete = rm -f $(1)

ifeq ($(platform),)
   platform := unix
   ifneq ($(findstring Windows,$(OS)),)
      platform := win
   else ifneq ($(findstring Msys,$(OS)),)
      platform := win
   else ifneq ($(findstring Darwin,$(OS)),)
      platform := osx
   endif
endif

ifeq ($(platform),win)
   ifneq ($(and $(VCINSTALLDIR),$(LIB)),)
      compiler = msvc
      CC       = cl.exe
      CXX      = cl.exe
      LD       = link.exe
      AR       = lib.exe
   else ifeq ($(compiler),msvc)
      $(error msvc environment not set)
   endif
   EXE_EXT    := .exe
   OBJ_EXT    := .obj
   STATIC_EXT := .lib
   SHARED_EXT := .dll
   ifneq ($(findstring ;,$(PATH)),)
      pathsearch = $(wildcard $(addsuffix /$(1),$(subst ;, ,$(subst $(SPACE),\ ,$(subst \,/,$(PATH))))))
   endif
   ifeq ($(findstring rm, $(call pathsearch,rm$(EXE_EXT))),)
      delete = del $(subst /,\,$(1)) 2>nul
   endif
endif

define add_lib_ =
ifeq ($(STATIC_LINKING), 1)
   OBJECTS += $(2)
else
   ifeq ($(compiler),msvc)
      LIBS += lib$(1).lib
   else
      LIBS += -l$(1)
   endif
TARGET_DEPS += lib$(1)$(STATIC_EXT)
lib$(1)$(STATIC_EXT): $(2)
endif
clean_$(1):
	$(call delete,$(2) $(1)$(STATIC_EXT))
clean: clean_$(1)
.PHONY: clean_$(1)
endef

ifeq ($(compiler),msvc)
   add_lib = $(eval $(call add_lib_,$(1), $(2:.o=.obj)))
else
   add_lib = $(eval $(call add_lib_,$(1), $(2)))
endif

define add_def =
ifeq ($($(1)), 1)
   DEFINES += -D$(1)
endif
endef

add_defines = $(foreach define,$(1),$(eval $(call add_def,$(define))))

$(info platform : $(platform))
$(info compiler : $(compiler))
$(info OS       : $(OS))
#$(error done)

.PHONY: all
all: build
