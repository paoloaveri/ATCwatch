
#pragma once

#include "Arduino.h"

void init_battery();
float get_battery();
int get_battery_percent();
int mv_to_percent(float mvolts);
int get_battery_raw();
bool get_charge();
bool get_charged();
void check_battery_status();
