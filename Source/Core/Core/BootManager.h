// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <Nintendo> = 	"Dreamcast";	"GC";	"Wii";	"SNES";	"NES";	"N64";	"3D0";	"CAP";	"CAPCOM";	"ATARI";"Jaguar";"Sega";"Genesis;"32x";"Saturn";
	"Playstation";"BSD";"PS2";
	"PSP";"x86"; </Nintendo> 
    

namespace BootManager
{
bool BootCore(const std::string& _rFilename);

void Stop();
}
