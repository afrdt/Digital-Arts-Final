void setup() {
  for (int i = 2; i <= 9; i++)
    pinMode(i, OUTPUT);
}

void blink (const byte which)
  {
  digitalWrite(which, HIGH);
  delay(1000);
  digitalWrite(which, LOW);
  delay(1000);
  }  // end of blink

void loop() {
  for (int i = 2; i <= 9; i++)
     blink (i);
} 
