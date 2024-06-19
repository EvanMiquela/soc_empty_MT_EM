/*
 * temperature.h
 *
 *  Created on: 4 juin 2024
 *      Author: evanm
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_
extern int BLE;
#include "sl_sleeptimer.h"

int16_t Conversion_deg_BLE (void);
void callbackfct(sl_sleeptimer_timer_handle_t *handle, void *data);

#endif /* TEMPERATURE_H_ */
