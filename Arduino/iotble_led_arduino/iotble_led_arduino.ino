#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;

int led = 15;
char comando; 

void setup() {
  pinMode(led, OUTPUT);
  
  Serial.begin(115200);
  SerialBT.begin("ESP32_LED_APP");
  Serial.println("Dispositivo iniciado, aguardando pareamento!");
}

void loop() {

  if (SerialBT.available()) {
    
    comando = SerialBT.read();

    Serial.write(comando);

    //Se recebu 1, ligo o led
    if (comando == '1'){
      digitalWrite(led,HIGH);
    }

    //Se recebeu 0, desligo o led
    if (comando == '0'){
      digitalWrite(led,LOW);
    }
  }

  delay(20);    
}
