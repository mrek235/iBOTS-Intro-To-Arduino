// Development Plan:  Check off each step with an 'x' as you complete each one:
// [x] Showed up to the workshop.
// [x] This file is open in VSCode.
// [x] View the simulated Arduino by opening the diagram.json file (shows up when PlatformIO and WokWi Simulator extensions are installed).
// [x] The Red LED is turned on.
// [x] The Green LED is also turned on.
// [x] The Blue LED is also turned on.
// [X] 300 milliseconds after all the LEDs turn on, the Blue LED turns off.
// [X] The Red LED then turns on and off every second, forever.
// [X] The Green LED simultaneously turns on and off every half-second, forever.
// [X] The Blue LED is on whenever the Green LED is off, and vice-versa.



#include <Arduino.h>

void setup() {
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    delay(300);
    digitalWrite(5,LOW);

}

void loop() {
    digitalWrite(3,LOW);
    
    digitalWrite(4,HIGH);
    digitalWrite(5,!digitalRead(4));
    digitalWrite(4,LOW);
    digitalWrite(5,!digitalRead(4));
    delay(500);
    digitalWrite(4,HIGH);
    digitalWrite(5,!digitalRead(4));
    digitalWrite(4,LOW);
    digitalWrite(5,!digitalRead(4));
    delay(500);
    digitalWrite(3,HIGH);
}
