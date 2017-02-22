#pragma once
#include "Structures.h"
#include <Windows.h>
#include <iostream>

namespace MtWest
{
	namespace Achievements
	{
		const short ACHIEVEMENT_ZOMBIE_HUNTER     = 0x00;
		const short ACHIEVEMENT_ZOMBIE_KILLER     = 0x01;
		const short ACHIEVEMENT_ZOMBIE_GENOCIDER  = 0x02;
		const short ACHIEVEMENT_SELF_DEFENSE      = 0x03;
		const short ACHIEVEMENT_PEACE_KEEPER      = 0x04;
		const short ACHIEVEMENT_PUNISHER          = 0x05;
		const short ACHIEVEMENT_LEGENDARY_SOLDIER = 0x06;
		const short ACHIEVEMENT_HELLA_COPTER      = 0x07;
		const short ACHIEVEMENT_TOUR_GUIDE        = 0x08;
		const short ACHIEVEMENT_FRANK_THE_PIMP    = 0x09;
		const short ACHIEVEMENT_FULL_SET          = 0x0A;
		const short ACHIEVEMENT_HUMANIST          = 0x0B;
		const short ACHIEVEMENT_LIFE_SAVER        = 0x0C;
		const short ACHIEVEMENT_SAINT             = 0x0D;
		const short ACHIEVEMENT_STRIKE            = 0x0E;
		const short ACHIEVEMENT_COSTUME_PARTY     = 0x0F;
		const short ACHIEVEMENT_RAINING_ZOMBIES   = 0x10;
		const short ACHIEVEMENT_GOURMET           = 0x11;
		const short ACHIEVEMENT_ITEM_SMASHER      = 0x12;
		const short ACHIEVEMENT_BULLET_POINT      = 0x13;
		const short ACHIEVEMENT_PERFECT_GUNNER    = 0x14;
		const short ACHIEVEMENT_PHOTOJOURNALIST   = 0x15;
		const short ACHIEVEMENT_THE_ARTISTE       = 0x16;
		const short ACHIEVEMENT_GROUP_PHOTO       = 0x17;
		const short ACHIEVEMENT_PORTRAITURE       = 0x18;
		const short ACHIEVEMENT_CENSUS_TAKER      = 0x19;
		const short ACHIEVEMENT_PSYCHO_PHOTO      = 0x1A;
		const short ACHIEVEMENT_PSYCHO_COLLECTOR  = 0x1B;
		const short ACHIEVEMENT_PP_COLLECTOR      = 0x1C;
		const short ACHIEVEMENT_SNUFF_SHOT_B      = 0x1D;
		const short ACHIEVEMENT_SNUFF_SHOT_J      = 0x1E;
		const short ACHIEVEMENT_TRANSMISSIONARY   = 0x1F;
		const short ACHIEVEMENT_INDOORSMAN        = 0x20;
		const short ACHIEVEMENT_OUTDOORSMAN       = 0x21;
		const short ACHIEVEMENT_FREEFALL          = 0x22;
		const short ACHIEVEMENT_MARATHON_RUNNER   = 0x23;
		const short ACHIEVEMENT_CARJACKER         = 0x24;
		const short ACHIEVEMENT_STUNT_DRIVER      = 0x25;
		const short ACHIEVEMENT_STUNT_RIDER       = 0x26;
		const short ACHIEVEMENT_ZOMBIE_ROAD       = 0x27;
		const short ACHIEVEMENT_KARATE_CHAMP      = 0x28;
		const short ACHIEVEMENT_SHARP_DRESSER     = 0x29;
		const short ACHIEVEMENT_CLOTHES_HORSE     = 0x2A;
		const short ACHIEVEMENT_LEVEL_MAX         = 0x2B;
		const short ACHIEVEMENT_UNBREAKABLE       = 0x2C;
		const short ACHIEVEMENT_OVERTIME_MODE     = 0x2D;
		const short ACHIEVEMENT_INFINITY_MODE     = 0x2E;
		const short ACHIEVEMENT_3_DAY_SURVIVOR    = 0x2F;
		const short ACHIEVEMENT_5_DAY_SURVIVOR    = 0x30;
		const short ACHIEVEMENT_7_DAY_SURVIVOR    = 0x31;
	}

	namespace Actions
	{

		static void UnlockAchievement(__int64 achievementIndex)
		{
			std::cout << "Unlocking Achievement #" << achievementIndex << '\n';

			//Cast the subroutine as a callable function
			auto mtUnlockAchievement = reinterpret_cast<void(*)(__int64, DWORD64)>((__int64)Globals::GameBaseAddress + 0x337760);
			__int64* unknownGlobal = reinterpret_cast<__int64*>((__int64)Globals::GameBaseAddress + 0x1959EA0);

			mtUnlockAchievement(*unknownGlobal, achievementIndex);

		}

		static void LevelUp()
		{
			//Cast the subroutine as a callable function
			auto mtAddPP = reinterpret_cast<void(*)(void*, __int64, __int64, __int64)>((__int64)Globals::GameBaseAddress + 0x97240);
			DWORD currentLevel = Globals::PlayerLevelData->PlayerLevel;
			DWORD xpRequired = Globals::LevelRequirementLookupTable[currentLevel];
			Globals::PlayerLevelData->PlayerPP = xpRequired + 100;
			__int64 arg2 = Globals::PlayerLevelData->PlayerPP;
			__int64 arg3 = (__int64)0;
			__int64 arg4 = 0x3B9ACA00; //This can probably be any value

			Globals::PlayerLevelData->PlayerLevel += 1;
			mtAddPP(Globals::PlayerLevelData, arg2, arg3, arg4);
			std::cout << "Increased player level to " << (__int64)(Globals::PlayerLevelData->PlayerLevel) << '\n';
		}
	}
}