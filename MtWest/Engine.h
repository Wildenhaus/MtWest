#pragma once
#include <Windows.h>

namespace MtWest
{
	class Engine
	{
	protected:
		HANDLE mGameHandle;
		void Initialize();

	public:
		Engine(HANDLE pGameHandle)
		{
			mGameHandle = pGameHandle;
			Initialize();
		};
	};
}