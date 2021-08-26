//int buttonState = 0;

/*
BOTÃO -> Começar a alimentar a placa e os componentes.
Sensor de Vibração -> Vibrar quando ocorrer proximidade pelo sensor.
Sensor PIR -> Mandar informação de proximidade para o Sensor de Vibração. 
*/

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