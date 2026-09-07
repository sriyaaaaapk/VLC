// STAGE 2: LED + BPW34 synchronized test
// Timestamped LED switching + ADC measurement

const int LED_PIN = 8;
const int SENSOR_PIN = A0;

unsigned long lastToggle = 0;
bool ledState = false;

const unsigned long blinkInterval = 500; // LED changes every 500 ms

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Stage 2: LED + BPW34 test");
  Serial.println("Time(ms)\tLED\tADC");
}

void loop() {

  unsigned long now = millis();

  // Toggle LED
  if (now - lastToggle >= blinkInterval) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    lastToggle = now;

    // Print the exact moment of LED switching
    Serial.print(now);
    Serial.print("\tLED ");
    Serial.println(ledState ? "ON" : "OFF");
  }

  // Read receiver
  int adcValue = analogRead(SENSOR_PIN);

  Serial.print(now);
  Serial.print("\t");
  Serial.print(ledState ? "ON" : "OFF");
  Serial.print("\t");
  Serial.println(adcValue);

  delay(1000);
}
