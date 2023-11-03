static unsigned int myBuzzer = 3;

void setup () {
  Serial.begin(9600);
  pinMode(myBuzzer, OUTPUT);
}

void loop () {
  digitalWrite(myBuzzer, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(myBuzzer, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  tone(myBuzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 750); // Send 1KHz sound sig/nal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 500); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 250); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(myBuzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
}