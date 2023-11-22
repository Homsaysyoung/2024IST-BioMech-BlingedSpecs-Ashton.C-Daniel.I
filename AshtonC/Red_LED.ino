/*
  Purpose: Basic example of the Red LED Seead output module
  Notes: 
    1. Connect to a Digital Pin or Digital PWM pin for power control
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://www.seeedstudio.com/Grove-Red-LED.html
*/

static unsigned int red_LED = 3;


void setup () {
  Serial.begin(9600);
  pinMode(red_LED, OUTPUT);`
  
}

void loop () {
  digitalWrite(red_LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.println(digitalRead(red_LED));

}