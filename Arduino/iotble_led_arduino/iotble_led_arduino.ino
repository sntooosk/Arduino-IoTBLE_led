#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

//Declaro o bluetooth para trabalhar como serial (pode transferir arquivos ou dados seriais, trabalha com streamings)
BluetoothSerial SerialBT;

int led = 15; //pino do led
char comando; //guarda os comandos vindos do app

void setup() {
  pinMode(led, OUTPUT); //configuro o led para acender
  
  Serial.begin(115200); //configuração da serial para testes no monitor
  SerialBT.begin("ESP32_LED"); //Nome do Bluetooth
  Serial.println("Dispositivo iniciado, aguardando pareamento!");
}

void loop() {

  //Se o Bluetooth estiver disponível...  
  if (SerialBT.available()) {
    
    //Guardo o comando vindo do app
    comando = SerialBT.read();

    Serial.write(comando); //Para visualizar os comandos recebidos no monitor

    //Se recebu 1, ligo o led
    if (comando == '1'){
      digitalWrite(led,HIGH);
    }

    //Se recebeu 0, desligo o led
    if (comando == '0'){
      digitalWrite(led,LOW);
    }
  }

  //Pequeno delay para dar tempo para o processador trabalhar...
  delay(20);  
  
}
