// Pin connected to the LED
const int ledPin = 13;

void setup() {
  // Set the LED pin as an output
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);
  
  // Wait for 2 seconds
  delay(500);
  
  // Turn off the LED
  digitalWrite(ledPin, LOW);
  
  // Wait for 2 seconds
  delay(500);
}
