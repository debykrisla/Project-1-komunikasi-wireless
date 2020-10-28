const int SensorPIN = 8;
const int LedPIN = 7;
int KeadaanSensor = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SensorPIN, INPUT);
  pinMode(LedPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int BacaSensor = digitalRead(SensorPIN);

  if (BacaSensor == HIGH && KeadaanSensor != BacaSensor) {
    digitalWrite(LedPIN, HIGH);
    Serial.println("Terdeteksi Asap Rokok");
    KeadaanSensor = !KeadaanSensor;
  }
  else if (BacaSensor == LOW && KeadaanSensor != BacaSensor) {
    digitalWrite(LedPIN, LOW);
    Serial.println("Tidak ada asap rokok");
    KeadaanSensor = !KeadaanSensor;
  }

}
