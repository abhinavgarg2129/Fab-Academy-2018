import controlP5.*; //import ControlP5 library
import processing.serial.*;

Serial port;

ControlP5 cp5; //create cp5 object
PFont font;

void setup(){ 

  size(300, 500);    //window size, (width, height)
  
  printArray(Serial.list());   //prints all available serial ports
  
  port = new Serial(this, "COM12", 9600); 
  
  //lets add buton to empty window
  
  cp5 = new ControlP5(this);
font = createFont("calibri light bold", 20);
 
  
  cp5.addButton("Board_1")     //"Board 1" is the name of button
    .setPosition(100, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 120)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("Board_2")     //"Board 2" is the name of button
    .setPosition(100, 200)  //x and y coordinates of upper left corner of button
    .setSize(120, 120)      //(width, height)
     .setFont(font);

 cp5.addButton("Board_3")     //"Board 2" is the name of button
    .setPosition(100, 350)  //x and y coordinates of upper left corner of button
    .setSize(120, 120)      //(width, height)
     .setFont(font);

}

void draw(){  //same as loop in arduino ide

  background(250,250,250); // background color of window (r, g, b) or (0 to 255)
  
  //lets give title to our window
  fill(25,115,235);               //text color (r, g, b)
  
  text("Namaskar", 110, 30);textSize(20);  // ("text", x coordinate, y coordinat)
}


//so when you press any button on the GUI, it sends perticular char over serial port

void Board_1(){
  port.write('c');
}

void Board_2(){
  port.write('g');
}

void Board_3(){
  port.write('b');
}
