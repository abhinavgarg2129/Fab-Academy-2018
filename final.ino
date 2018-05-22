#include <SoftwareSerial.h>
 const byte rxPin = 2;
 const byte txPin= 1;
 SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(3, OUTPUT);
  pinMode(4,INPUT);
  digitalWrite(7,HIGH);
    // define pin modes for tx, rx:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

//listen to serial port
if (mySerial.read()=='c')
{
  digitalWrite(3,HIGH);
  
  }

if (mySerial.read()=='g')
{
  digitalWrite(3,LOW);
  
  }

   
if (mySerial.read()=='b')
{
  
digitalWrite(3,HIGH);
delay(1000);
digitalWrite(3,LOW);
delay(1000);
  

 }  
}


