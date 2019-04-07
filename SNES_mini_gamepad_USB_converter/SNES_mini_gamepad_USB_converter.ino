#include <NintendoExtensionCtrl.h>
#include "UnoJoy.h"

// An instance of SNES mini gamepad (can be changed to NES mini controller)
SNESMiniController snes;

void setup(){
  setupPins();
  setupUnoJoy();
  
  snes.begin();
  // Wait for gamepad connection
  while (!snes.connect()) {
    delay(1000);
  }
}

void setupPins(void){
  /* You can use non-gamepad buttons connected to Arduino pins if you need */
//  pinMode(2, INPUT);
//  digitalWrite(2, HIGH);
}

void loop(){
  boolean success = snes.update(); // get new values

  // Check if update was successful
  if (!success) {
    // If not - wait a second and continue
    delay(1000);
    return;
  }

  // Creating the values set of our controller
  dataForController_t controllerData = getBlankDataForController();
  
  /* Since our buttons are all held high and
   * pulled low when pressed, we use the "!"
   * operator to invert the readings from the pins */
//  controllerData.homeOn = !digitalRead(2); // "home" button, for example
  
  // Setting the values from SNES controller
  controllerData.triangleOn = snes.buttonX();
  controllerData.circleOn = snes.buttonA();
  controllerData.squareOn = snes.buttonY();
  controllerData.crossOn = snes.buttonB();
  
  controllerData.dpadUpOn = snes.dpadUp();
  controllerData.dpadDownOn = snes.dpadDown();
  controllerData.dpadLeftOn = snes.dpadLeft();
  controllerData.dpadRightOn = snes.dpadRight();
  
  controllerData.l1On = snes.buttonL();
  controllerData.r1On = snes.buttonR();
  
  controllerData.selectOn = snes.buttonSelect();
  controllerData.startOn = snes.buttonStart();

  setControllerData(controllerData); // Pass the values to the USB
}
