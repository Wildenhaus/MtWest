#ifndef DR_STRUCTURES
#define DR_STRUCTURES

#include <Windows.h>

namespace MtWest
{
	namespace Structures
	{
		struct sPlayerLevelData
		{
			DWORD64* unknown_01;    //0x00-0x08
			char  unknown_02[0x30]; //0x08-0x38
			int   RuntimePP;		//0x38-0x3C
			char  unknown_03[0x14];	//0x3C-0x50
			int   PlayerPP;			//0x50-0x54
			char  unknown_04[0x14];	//0x54-0x68
			int   PlayerLevel;		//0x68-0x6C
		};

		void Scan();
	}

	namespace Globals
	{
		extern DWORD64* GameBaseAddress;
		extern Structures::sPlayerLevelData* PlayerLevelData;

		extern DWORD* LevelRequirementLookupTable;
	}
}

#endif