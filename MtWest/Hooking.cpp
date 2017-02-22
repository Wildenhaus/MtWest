#include <Windows.h>
#include <string>
#include <cstring>
using std::string;
#include <iostream>
using std::cout;
#include "Hooking.h"

namespace MtWest
{
	void Hook::PatchWithJmp()
	{
		cout << "Inserting JMP at address " << mAddressToHook << ":\n";

		DWORD OldProtect;	//Remove Write Protection
		VirtualProtect(mAddressToHook, mNopCount + 13, 0x40, &OldProtect);

		//Since x64 requires JMPs to be within 2GB of address space from RIP,
		//we need to load the address into a register and jump from that.
		//We also need to save RAX to the stack and pop it later in the function.
		unsigned char toWrite[] = { '\x50',                                                 //push rax
						   '\x48',  '\xB8',                                                 //mov rax, ...
						   '\x00',  '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', //address for operand
						   '\xFF',  '\xE0' };                                               //jmp rax

		memcpy(&toWrite[3], &mFuncToHook, sizeof(mFuncToHook)); //Copy pointer address into string

		//Now we write the new values in byte-by-byte
		char* currentByte = (char*)mAddressToHook;
		for (char tempByte : toWrite)
		{
			*currentByte = tempByte;
			currentByte++;
		}

		for (int i = 0; i < mNopCount; i++)
		{
			*currentByte = '\x90';
			currentByte++;
		}

		VirtualProtect(mAddressToHook, mNopCount + 13, OldProtect, &OldProtect); //Restore Protection
	};

	void Hook::Apply()
	{
		if (!this->mIsApplied)
		{
			this->mIsApplied = true;
			PatchWithJmp();
		}
	}

	namespace HookFunctions
	{
		/*    Name: GrabStatsManagerPointer()
		 *    Hook at: DeadRising.exe+98420
		 *    Signature: 8B 41 68 48 8D 15 C6 A7
		 *    Desc: Grabs pointer for StatsManager, continues function normally
		 */
		_declspec(naked) void GrabStatsManagerFunc()
		{
			__asm
			{
				mov MtWest::Globals::PlayerLevelData, rcx  //Obtain the PlayerLevelData struct
				pop rax
				mov eax, [rcx + 0x68]                      //rax is volatile but we need to pop anyways
				mov rdx, [Globals::GameBaseAddress]
				lea rdx, [rdx + 0x1192BF0]                 //0x00007FF79CEA2BF0 //HARDCODED, FIX THIS -> 
				mov eax, [rdx + rax * 4]
				sub eax, [rcx + 0x50]
				ret
			}
		}
	}

	namespace HookAddresses
	{
		DWORD64* GrabStatsManagerAddress = (DWORD64*)0x98420;
	}
}