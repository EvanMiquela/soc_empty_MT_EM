/*
 * temperature.c
 *
 *  Created on: 4 juin 2024
 *      Author: evanm
 */
#include "sl_sensor_rht.h"
#include "stdint.h"


int16_t Conversion_deg_BLE ()
{
  int32_t t;
  uint32_t rh;
  int16_t BLE;
  sl_sensor_rht_get(&rh, &t);
  BLE = t * 1*0.01*1;

  return BLE;
}

