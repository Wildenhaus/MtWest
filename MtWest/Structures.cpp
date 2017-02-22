#include "Structures.h"
namespace MtWest 
{
	//Main Addresses
	DWORD64* Globals::GameBaseAddress = nullptr;

	//Structures
	Structures::sPlayerLevelData* Globals::PlayerLevelData = nullptr;

	//Data Arrays
	DWORD* Globals::LevelRequirementLookupTable = nullptr;


	// Functions
	void Structures::Scan()
	{
		//Scan pointers
		//Currently everything is taken care of by hooks
	}
}