/*
 * temperature.c
 *
 *  Created on: 4 juin 2024
 *      Author: evanm
 */
#include "sl_sensor_rht.h"
#include "stdint.h"
#include "temperature.h"
#include "app_log.h"
#include "sl_bluetooth.h"
#include "sl_sensor_rht.h"
#define TEMPERATURE_TIMER_SIGNAL (1<<0)

int step = 1;

void callbackfct(sl_sleeptimer_timer_handle_t *handle, void *data)
{
  handle = handle;
  data = data;
  app_log_info("Step : %d\n", step);
  step = step + 1;
  sl_bt_external_signal(TEMPERATURE_TIMER_SIGNAL);

}

int16_t Conversion_deg_BLE ()
{
  int32_t t;
  uint32_t rh;
  int16_t BLE;
  sl_sensor_rht_get(&rh, &t);
  BLE = t * 1*0.1*1;

  return BLE;
}



