const int ledPin = 2;
const int ldrPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(ldrPin, INPUT);
}

void loop() {
    int ldrStatus = analogRead(ldrPin);
    if (ldrStatus <= 200) {
        digitalWrite(ledPin, LOW);
        Serial.print("It's BRIGHT, Turn OFF the LED: ");
        Serial.println(ldrStatus);
    } else {
        digitalWrite(ledPin, HIGH);
        Serial.print("It's DARK, Turn ON the LED: ");
        Serial.println(ldrStatus);
    }
}
