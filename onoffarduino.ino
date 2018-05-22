#include <SoftwareSerial.h>
 const byte rxPin = 2;
 const byte txPin= 1;
 SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

void setup() {

  pinMode(3, OUTPUT);

  // define pin modes for tx, rx:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  
}

void loop() {

  
  if (mySerial.available()) {

    char val = mySerial.read();
    
    if (val == 'o') {
      digitalWrite(3, HIGH);
    }
    if (val == 'f') {
      digitalWrite(3, LOW);
    }
  }
}
  

