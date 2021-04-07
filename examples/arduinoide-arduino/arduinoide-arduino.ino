#include <Arduino.h>
#include "project_config.h"
#include "rlog.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(74880);
  Serial.println();

  rlog_v("DEMO", "Test message, level: %s", "VERBOSE");
  rlog_d("DEMO", "Test message, level: %s", "DEBUG");
  rlog_i("DEMO", "Test message, level: %s", "INFORMATION");
  rlog_w("DEMO", "Test message, level: %s", "WARNING");
  rlog_e("DEMO", "Test message, level: %s", "ERROR");
}

void loop() {
  // put your main code here, to run repeatedly:
  // nothing
}
