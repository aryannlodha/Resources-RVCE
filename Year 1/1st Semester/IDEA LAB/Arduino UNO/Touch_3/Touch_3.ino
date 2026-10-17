const int TOUCH_SENSOR_PIN = 2;
const int LED_PIN = 3;

void setup() {
    Serial.begin(9600);
    pinMode(TOUCH_SENSOR_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    int touchState = digitalRead(TOUCH_SENSOR_PIN);
    if (touchState == HIGH) {
        Serial.println("The Sensor is being touched");
        digitalWrite(LED_PIN, HIGH);
        delay(1000);
    } else {
      if (touchState == LOW)
      {
        Serial.println("The Sensor is untouched");
        digitalWrite(LED_PIN, LOW);
        delay(1000);}
    }
}
