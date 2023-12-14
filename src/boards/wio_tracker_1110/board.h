#ifndef _WIO_TRACKER_1110_H
#define _WIO_TRACKER_1110_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(0, 6)
#define LED_STATE_ON          0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(1, 2)
//button 2 assignment on unconnected pin of wm1110.  only double reset used to enter BL.
#define BUTTON_2              _PINNUM(1, 8)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Seeed Studio"
#define BLEDIS_MODEL          "Wio Tracker 1110"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x002A

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "Seeed Wio Tracker 1110"
#define UF2_VOLUME_LABEL      "WM1110_BOOT"
#define UF2_BOARD_ID          "WioTracker1110"
#define UF2_INDEX_URL         "https://www.seeedstudio.com/Wio-WM1110-Module-LR1110-and-nRF52840-p-5676.html"

#endif // _WIO_TRACKER_1110_H