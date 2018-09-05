#include <Uefi.h>
#include <Library\UefiLib.h>
#include <Library\DebugLib.h>
#include <Library\MemoryAllocationLib.h>
#include <Library\UefiBootServicesTableLib.h>

extern CONST UINT32 _gUefiDriverRevision = 0;

CHAR8 *gEfiCallerBaseName = "UefiBootLoader";

EFI_STATUS
EFIAPI
UefiUnload(
	IN EFI_HANDLE ImageHandle
)
{
	ASSERT(FALSE);
}

EFI_STATUS
EFIAPI
UefiMain(
	IN EFI_HANDLE ImageHandle,
	IN EFI_SYSTEM_TABLE* SystemTable
)
{
	EFI_STATUS efiStatus;
	efiStatus = Print(L"Hello, world!\n");
	return efiStatus;
}