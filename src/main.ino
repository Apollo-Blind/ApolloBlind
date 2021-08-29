#define PIN_PIR A4
#define PIN_VIBRATOR A1 

//the time we give the sensor to calibrate (10-60 secs according to the datasheet)
int calibrationOfVibratorTime = 1;  

void setup()
{
  pinMode(PIN_VIBRATOR, OUTPUT); // Motor of Vibration
  pinMode(PIN_PIR, INPUT); // Sensor PIR
  digitalWrite(PIN_PIR, LOW); // Add of Pin state of Sensor PIR

  // While ON
  for(int calibrate = 0; calibrate < calibrationOfVibratorTime; calibrate++)
  {
    digitalWrite(PIN_VIBRATOR, HIGH);
    delay(2000);
    digitalWrite(PIN_VIBRATOR, LOW);
  }
}

void loop()
{
  int valuePresence = digitalRead(PIN_PIR);
  if (valuePresence == HIGH) {
    digitalWrite(PIN_VIBRATOR, HIGH);

  }
  if (valuePresence == LOW) {
    digitalWrite(PIN_VIBRATOR, LOW);
  }
}

/*
BOTÃO -> Começar a alimentar a placa e os componentes.
Sensor de Vibração -> Vibrar quando ocorrer proximidade pelo sensor.
Sensor PIR -> Mandar informação de proximidade para o Sensor de Vibração. 
*/