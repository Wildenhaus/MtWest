#ifndef DR_HOOKING
#define DR_HOOKING

#include "Structures.h"

namespace MtWest
{
	class Hook
	{
	private:
		void PatchWithJmp();
	protected:
		void* mAddressToHook;
		void* mFuncToHook;
		int mNopCount;
		bool mIsApplied;
	public:
		Hook(void* pAddressToHook, void* pFuncToHook, int pNopCount = 0)
		{
			mAddressToHook = (void*)((size_t)pAddressToHook + (size_t)Globals::GameBaseAddress);
			mFuncToHook = pFuncToHook;
			mNopCount = pNopCount;
			mIsApplied = false;
		};

		void Apply();
	};

	namespace HookFunctions
	{
		void GrabStatsManagerFunc();
	}

	namespace HookAddresses
	{
		extern DWORD64* GrabStatsManagerAddress;
	}

	static void InstallHooks()
	{
		Hook StatsManagerHook((void*)HookAddresses::GrabStatsManagerAddress, (void*)HookFunctions::GrabStatsManagerFunc, 0);
		StatsManagerHook.Apply();
	}

}

#endif