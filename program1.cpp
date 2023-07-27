// C++ code
//
int ledpin = 4;
int potentio = A0;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode( potentio, INPUT);
}

void loop()
{
  int delaytime = analogRead(potentio);

  digitalWrite(ledpin, HIGH);
  delay(delaytime); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin, LOW);
  delay(delaytime); // Wait for 1000 millisecond(s)
}
