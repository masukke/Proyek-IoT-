#include <SoftwareSerial.h>
SoftwareSerial module_bluetooth(0, 1);  // pin RX | TX

char data = 0;
void setup() {
  // Pengaturan LED untuk running LED
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  // Akhir dari pengaturan running LED

  Serial.begin(9600);
  pinMode(13, OUTPUT);  //inisialisasi LED menjadi output
}
void loop() {
  // Konfigurasi running LED
  digitalWrite(2, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);

  // Invers
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(50);
  digitalWrite(2, LOW);
  // Akhir dari konfigurasi running LED

  if (Serial.available() > 0) {
    data = Serial.read();
    Serial.print(data);  //Pembacaan dan ditampilkan data yang masuk
    Serial.print("\n");
    //Data yang masuk
    if (data == '1') {
      digitalWrite(13, HIGH);  //diberikan waktu tunda 1 detik

    } else if (data == '0')
      digitalWrite(13, LOW);
  }
}
