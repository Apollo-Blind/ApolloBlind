#define PIN_PIR A4
#define PIN_VIBRATOR A1 

void setup()
{
  pinMode(PIN_VIBRATOR, OUTPUT); // Motor of Vibration
  pinMode(PIN_PIR, INPUT); // Sensor PIR
}

void loop()
{
  int valuePresence = digitalRead(PIN_PIR);
  if (valuePresence == HIGH)
  {
    digitalWrite(PIN_VIBRATOR, HIGH);
  } else if (valuePresence == LOW)
  {
    digitalWrite(PIN_VIBRATOR, LOW);
  }
}
