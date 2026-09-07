// Stage 1: Receiver circuit sanity check
// Confirms BPW34 + LM358 TIA is producing a usable signal on A0

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(A0);
  float voltage = raw * (5.0 / 1023.0);

  Serial.print("ADC: ");
  Serial.print(raw);
  Serial.print("  Voltage: ");
  Serial.print(voltage, 3);
  Serial.println(" V");

  delay(1000);
}
