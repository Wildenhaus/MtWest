#include "Engine.h"
#include "Hooking.h"
#include "Structures.h"
#include "Cheats.h"
#include <iostream>

namespace MtWest
{
	DWORD WINAPI WorkerThread(LPVOID lpParam)
	{
		//This is the main thread, where we can call functions and modify data.
		//An on-screen menu is in the works, but this will do for development purposes.

		//We always want an up to date globals list
		Structures::Scan();

		//Unlock Steam Achievement #11: Gourmet
		Actions::UnlockAchievement(Achievements::ACHIEVEMENT_GOURMET);

		//Level up the player
		Actions::LevelUp();

		return 0;
	}

	void Engine::Initialize()
	{
		//Set Base Address
		MtWest::Globals::GameBaseAddress = (DWORD64*)mGameHandle;
		std::cout << "Injected.\nGame Base Address: 0x" << MtWest::Globals::GameBaseAddress << "\n";
		std::cout << (Globals::GameBaseAddress + (DWORD64)0x1192BF0) << '\n';
		std::cout << std::hex << ((DWORD64)mGameHandle + 0x1192BF0) << '\n';

		//Apply Hooks
		MtWest::InstallHooks();

		//Start Thread
		CreateThread(NULL, 0, &WorkerThread, NULL, 0, NULL);
	}
}