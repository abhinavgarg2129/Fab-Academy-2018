void setup() {
  // initialize digital pin 8 as an output. default will be 13 in the arduino example.
  pinMode(3, OUTPUT);
 }

// the loop function runs over and over again forever

void loop() {
  digitalWrite(3,HIGH);
  delay(2000);
digitalWrite(3,LOW);
delay(2000);
 }
