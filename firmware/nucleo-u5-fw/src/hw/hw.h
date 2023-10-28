#ifndef HW_H_
#define HW_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "hw_def.h"


#include "led.h"
#include "uart.h"
#include "cli.h"
#include "log.h"
#include "usb.h"
#include "cdc.h"


bool hwInit(void);


#ifdef __cplusplus
}
#endif

#endif