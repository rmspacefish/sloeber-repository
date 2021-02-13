#include "DueTest.h"

uint32_t currentPinState = LOW;

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);
	digitalWrite(LED_BUILTIN, LOW);
	Serial.begin(115200);
	Serial.println("Serial port setup successfully");
}

void loop() {
	if(currentPinState == LOW) {
		Serial.println("Setting LED high");
		digitalWrite(LED_BUILTIN, HIGH);
		currentPinState = HIGH;
	}
	else {
		Serial.println("Setting LED low");
		digitalWrite(LED_BUILTIN, LOW);
		currentPinState = LOW;
	}
	delay(2000);
}

