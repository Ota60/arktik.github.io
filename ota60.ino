// ☾☆
//Deneyap Blokta yazdığımdan bazı yanlış yerler olabilir.Kusura bakmayın.
//☾☆ Deneyap
#include <deneyap.h>
#include "BluetoothSerial.h"
#include<Servo.h>
#include<esp_wifi.h>
BluetoothSerial SerialBT;

Servo servo_D9;
Servo servo_D8;

void setup() {
  SerialBT.begin("Arktik-01");

  Serial.begin(9600);

  servo_D9.attach(D9,0);
  servo_D8.attach(D8,1);
  //Canım aileme ithafen...
  //null sonra yapılacak demek.

}

void loop() {
    if (SerialBT.available()) {
      if (strcmp(SerialBT.read(),'i')) {
        //null
      }
      if (strcmp(SerialBT.read(),'l')) {
        //Sağ servo d8 sol servo d9
        servo_D9.write(115);
        delay(400);
        servo_D9.write(90);
        delay(0);
      }
      if (strcmp(SerialBT.read(),'r')) {
        //Sağ servo d8 sol servo d9
        servo_D8.write(115);
        delay(400);
        servo_D8.write(90);
        delay(0);
      }
      if (strcmp(SerialBT.read(),'y')) {
        //Sağ servo d8 sol servo d9
        servo_D8.write(115);
        delay(0);
        servo_D9.write(115);
        delay(400);
        servo_D8.write(90);
        delay(0);
        servo_D9.write(90);
        delay(0);
      }
      if (strcmp(SerialBT.read(),'a')) {
        //Sağ servo d8 sol servo d9
        servo_D8.write(115);
        delay(0);
        servo_D9.write(115);
        delay(400);
        servo_D8.write(90);
        delay(0);
        servo_D9.write(90);
        delay(0);
      }
      if (strcmp(SerialBT.read(),'p')) {
        //burası için hala çalışıyorum.Autopilot için.Değişiklikleri githubdan görebilirsiniz.
      }
    }

}
