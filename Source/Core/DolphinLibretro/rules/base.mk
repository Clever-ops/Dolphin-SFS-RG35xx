
compiler    ?= gcc
OS          ?= $(shell uname -o)
EXE_EXT     :=
OBJ_EXT     := .o
STATIC_EXT  := .a
SHARED_EXT  := .so

SPACE :=
SPACE := $(SPACE) $(SPACE)
BACKSLASH :=
BACKSLASH := \$(BACKSLASH)
filter_out1 = $(filter-out $(firstword $1),$1)
filter_out2 = $(call filter_out1,$(call filter_out1,$1))


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
   ifneq ($(compiler_win),)
      compiler = $(compiler_win)
   else ifneq ($(VCINSTALLDIR),)
      compiler = msvc
   endif
   ifeq ($(compiler),msvc)
      ifeq ($(VS140COMNTOOLS),)
         $(error VS 2015 Build Tools not found)
      endif
      reg_query = $(call filter_out2,$(subst $2,,$(shell reg query "$2" -v "$1" 2>nul)))
      fix_path = $(subst $(SPACE),\ ,$(subst \,/,$1))
      WindowsSdkDir ?= $(call reg_query,InstallationFolder,HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Microsoft\Microsoft SDKs\Windows\v10.0)
      WindowsSdkDir ?= $(call reg_query,InstallationFolder,HKEY_CURRENT_USER\SOFTWARE\Wow6432Node\Microsoft\Microsoft SDKs\Windows\v10.0)
      WindowsSdkDir ?= $(call reg_query,InstallationFolder,HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v10.0)
      WindowsSdkDir ?= $(call reg_query,InstallationFolder,HKEY_CURRENT_USER\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v10.0)
      WindowsSdkDir := $(WindowsSdkDir)

      WindowsSDKVersion ?= $(firstword $(foreach folder,$(subst $(subst \,/,$(WindowsSdkDir)Include/),,$(wildcard $(call fix_path,$(WindowsSdkDir)Include\*))),$(if $(wildcard $(call fix_path,$(WindowsSdkDir)Include/$(folder)/um/Windows.h)),$(folder),)))$(BACKSLASH)
      WindowsSDKVersion := $(WindowsSDKVersion)

      VSINSTALLDIR ?= $(patsubst %Common7\Tools\,%,$(VS140COMNTOOLS))
      VCINSTALLDIR ?= $(VSINSTALLDIR)VC$(BACKSLASH)
      INCLUDE ?=$(VCINSTALLDIR)INCLUDE;$(VCINSTALLDIR)ATLMFC\INCLUDE;$(WindowsSdkDir)include\$(WindowsSDKVersion)ucrt;$(WindowsSdkDir)include\$(WindowsSDKVersion)shared;$(WindowsSdkDir)include\$(WindowsSDKVersion)um;
      LIB ?=$(VCINSTALLDIR)LIB\amd64;$(VCINSTALLDIR)ATLMFC\LIB\amd64;$(WindowsSdkDir)lib\$(WindowsSDKVersion)ucrt\x64;$(WindowsSdkDir)lib\$(WindowsSDKVersion)um\x64;
      LIBPATH ?=$(VCINSTALLDIR)LIB\amd64;$(VCINSTALLDIR)ATLMFC\LIB\amd64;

      compiler_path = $(VCINSTALLDIR)bin\amd64
      ifeq ($(findstring $(compiler_path),$(PATH)),)
         PATH := $(compiler_path):$(PATH)
      endif

      export INCLUDE := $(INCLUDE)
      export LIB     := $(LIB)
      export LIBPATH := $(LIBPATH)
      export PATH    := $(PATH)

      CC       = cl.exe
      CXX      = cl.exe
      LD       = link.exe
      AR       = lib.exe
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
      TARGET_LIBS += lib$(1).lib
   else
      TARGET_LIBS += -l$(1)
   endif
TARGET_DEPS += lib$(1)$(STATIC_EXT)
lib$(1)$(STATIC_EXT): $(2)
endif
clean_$(1):
	$(call delete,$(2) lib$(1)$(STATIC_EXT))
clean_target: clean_$(1)
.PHONY: clean_$(1)
endef

define add_external_lib_ =
ifeq ($(STATIC_LINKING), 1)
   OBJECTS += $(2)
deps: $(2)
else
   ifeq ($(compiler),msvc)
      EXTERNAL_LIBS += lib$(1).lib
   else
      EXTERNAL_LIBS += -l$(1)
   endif
TARGET_DEPS += lib$(1)$(STATIC_EXT)
lib$(1)$(STATIC_EXT): $(2)
deps: lib$(1)$(STATIC_EXT)
endif
clean_$(1):
	$(call delete,$(2) lib$(1)$(STATIC_EXT))
clean_deps: clean_$(1)
.PHONY: clean_$(1)
endef

ifeq ($(compiler),msvc)
   add_lib = $(eval $(call add_lib_,$(1),$(2:.o=.obj)))
   add_external_lib = $(eval $(call add_external_lib_,$(1),$(2:.o=.obj)))
else
   add_lib = $(eval $(call add_lib_,$(1),$(2)))
   add_external_lib = $(eval $(call add_external_lib_,$(1),$(2)))
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

remove_occurences = $(strip $(if $(firstword $2),$(call remove_occurences,$(subst _$(firstword $2),,$1),$(filter-out $(firstword $2),$2)),$1))
vars_get_match    = $(foreach var,$(filter $1_%,$(.VARIABLES)),$(if $(call remove_occurences,$(var:$1%=%),$2),,$($(var))))
get_current       = $(strip $(foreach var,$1,$(call vars_get_match,$(var),$(platform) $(compiler) $(build) $(libtype))))

format_echo = $(if $(strip $(shell echo -e)),$(1),'$(1)')

ifneq ($V,1)
   Q=@
endif

#$(error done)

.PHONY: all
all: build
