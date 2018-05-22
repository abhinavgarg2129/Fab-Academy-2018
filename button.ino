void setup() {
   
// initialize digital pin 8 as an output.
pinMode(3, OUTPUT);
pinMode(4,INPUT);
digitalWrite(4,HIGH); // internal pullup

}
 
// the loop function runs over and over again forever
void loop() {
 
if (digitalRead(4)){
digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
 
}
else {
 
digitalWrite(3, HIGH);    // turn the LED off by making the voltage LOW

}
}

