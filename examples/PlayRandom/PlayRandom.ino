#include <Arduino.h>
#include "DYPlayerArduino.h"

// Initialise the player, it defaults to using Serial.
Player player;

// Alternatively initialise on another serial port.
// Player player(&Serial2);

void setup() {
    player.begin();
    player.setVolume(15); // 50% Volume
    player.setCycleMode(PLAY_MODE_RANDOM); // Play all randomly and repeat.
    player.play();
}

void loop() {
  /* Nothing to do.. */
  delay(5000);
}

