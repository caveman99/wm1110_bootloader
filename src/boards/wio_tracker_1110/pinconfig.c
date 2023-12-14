#include "boards.h"
#include "uf2/configkeys.h"

__attribute__((used, section(".bootloaderConfig")))
const uint32_t bootloaderConfig[] =
{
  /* CF2 START */
  CFG_MAGIC0, CFG_MAGIC1,                       // magic
  5, 100,                                       // used entries, total entries

  CFG_FLASH_BYTES,         0x100000,                                // FLASH_BYTES = 0x100000
  CFG_RAM_BYTES,           0x40000,                                 // RAM_BYTES = 0x40000
  CFG_BOOTLOADER_BOARD_ID, (USB_DESC_VID << 16) | USB_DESC_UF2_PID, // BOOTLOADER_BOARD_ID = USB VID+PID, used for verification when updating bootloader via uf2
  CFG_UF2_FAMILY,          0xada52840,                              // UF2_FAMILY = 0xada52840
  CFG_PINS_PORT_SIZE,      0x20,                                    // PINS_PORT_SIZE = PA_32

  0, 0, 0, 0, 0, 0, 0, 0
  /* CF2 END */
};
