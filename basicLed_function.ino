int ledPin = 13;
int ledState;

void setup ()
  {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
  }
  
void loop()
  {
    digitalWrite(ledPin, HIGH);
    ledState = digitalRead(ledPin);
    Serial.println(ledState);
    delay(1000);
    digitalWrite(ledPin, LOW);
    ledState = digitalRead(ledPin);
    Serial.println(ledState);
    delay(1000);
  }
  
