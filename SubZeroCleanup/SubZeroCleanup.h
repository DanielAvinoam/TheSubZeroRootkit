#pragma once
#include "pch.h"

class SubZeroCleanup
{
	static std::uint16_t GetProcessPidByProcessName(const std::wstring& processName);
	static bool IsLocalSystem();

public:
	static void Cleanup();
};