const int irSensorPin = 2; // Pin connected to the IR sensor
const int waterLevelPin = A0; // Analog pin connected to the water level sensor
const int pumpRelayPin = 8; // Pin connected to the pump relay for dispensing water
const int refillRelayPin = 9; // Pin connected to the refill pump relay

const int waterLevelLowThreshold = 550; // Threshold value for low water level

void setup() {
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as input
  pinMode(pumpRelayPin, OUTPUT); // Set pump relay pin as output
  pinMode(refillRelayPin, OUTPUT); // Set refill pump relay pin as output

  digitalWrite(pumpRelayPin, LOW); // Initially turn off the pump
  digitalWrite(refillRelayPin, HIGH); // Initially turn off the refill pump
  Serial.begin(9600); // Begin serial communication for debugging
}

void loop() {
  int irSensorValue = digitalRead(irSensorPin); // Read the IR sensor value (LOW if activated)
  int waterLevelValue = analogRead(waterLevelPin); // Read the water level sensor value

  Serial.print("Water level: ");
  Serial.println(waterLevelValue); // Print the water level value for monitoring
  Serial.print(irSensorValue); // Print the IR sensor status

  // Check if the IR sensor is activated (LOW means water needs to be dispensed)
  if (irSensorValue == LOW) {
      digitalWrite(pumpRelayPin, LOW); // Turn on the pump (dispense water)
      Serial.println("Dispensing Water: Pump ON");
  } else {
      digitalWrite(pumpRelayPin, HIGH); // Turn off the pump
      Serial.println("Pump OFF");
  }

  // Check if the water level is above the low threshold
  if (waterLevelValue >= waterLevelLowThreshold) {
      digitalWrite(refillRelayPin, HIGH); // Turn off the refill pump
      Serial.println("Refilling off");
  }
  // If the water level is very low (below 400), start refilling
  else if (waterLevelValue < 400) {
      digitalWrite(refillRelayPin, LOW); // Turn on the refill pump
      Serial.println("Refilling Water: Refill Pump ON");
  }

  delay(500); // Short delay before next loop iteration
}
