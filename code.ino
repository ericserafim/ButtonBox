#include "DigiKeyboard.h"

int MIC = 2;
int CAM = 0;

void setup() {
  pinMode(MIC, INPUT_PULLUP);
  pinMode(CAM, INPUT_PULLUP);

  digitalWrite(MIC, HIGH);
  digitalWrite(CAM, HIGH);
}


void loop() {

  int mic_status = digitalRead(MIC);
  int cam_status = digitalRead(CAM);
  
  if (mic_status == LOW) {    
    //DigiKeyboard.println("MIC");
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);
  }

  if (cam_status == LOW) {
    //DigiKeyboard.println("CAM");
    DigiKeyboard.sendKeyStroke(KEY_E, MOD_CONTROL_LEFT);
  }

  DigiKeyboard.delay(200);
}
