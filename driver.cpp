//kernel driver example
#include <ntdef.h>
#include <ntifs.h>
#include <ntddk.h>
#include <windef.h>
#include <ntstrsafe.h>
//int main() doesn't work, we need to use an entry point!
//Entry point is a custom in the solution settings!
extern "C" NTSTATUS EntryPoint(PDRIVER_OBJECT driver_obj, PUNICODE_STRING registry_path) {
	UNREFERENCED_PARAMETER(driver_obj);
	UNREFERENCED_PARAMETER(registry_path);
  //std::cout won't work, we use debug print
	DbgPrintEx(0, 0, "Driver Loaded!\n");
 // return status
	return STATUS_SUCCESS;
}
