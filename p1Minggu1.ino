#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;

int pos = 0; //Variabel untuk menyimpan posisi servo

void setup() {
  myservo.attach(9); //pin data servo yang tersambung ke pin 9 pada mikro
  myservo2.attach(10); //pin data servo yang tersambung ke pin 10 pada mikro
  myservo3.attach(11); //pin data servo yang tersambung ke pin 11 pada mikro
}

void loop() {
  // Menggerakkan servo dari 0 ke 180 derajat
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos); //perintah mengirim ke servo
    myservo2.write(pos); //perintah mengirim ke servo
    myservo3.write(pos); //perintah mengirim ke servo
    delay(10);          // Menunggu 10ms untuk transisi halus
  }
  
  // Menggerakkan servo dari 180 ke 0 derajat
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos); // perintah mengirim ke servo
    myservo2.write(pos); // perintah mengirim ke servo
    myservo3.write(pos); // perintah mengirim ke servo
    delay(10);          // Menunggu 10ms untuk transisi halus
  }