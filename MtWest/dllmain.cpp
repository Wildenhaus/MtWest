#include <Windows.h>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <fstream>

#include "Engine.h"
using MtWest::Engine;

/* Globals */
HANDLE GAME_HANDLE;
Engine* engine_handle;

void Initialize()
{
	AllocConsole();
	freopen("CONOUT$", "w", stdout); //Redirect stdout to the allocated console
	engine_handle = new Engine(GetModuleHandle(NULL));
}

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwAttached, LPVOID lpvReserved)
{
	if (dwAttached == DLL_PROCESS_ATTACH)
	{
		Initialize();
	}
	return 1;
}