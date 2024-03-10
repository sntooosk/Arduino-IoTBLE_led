# Controle de LED com ESP32 via Bluetooth Serial

Este é um aplicativo simples para controlar o ligamento e desligamento de um LED utilizando um microcontrolador ESP32 e comunicação via Bluetooth Serial.

## Funcionalidades:

- Ligar e desligar um LED remotamente através de um aplicativo móvel via Bluetooth.
- Interface simples e intuitiva para facilitar o uso.

## Requisitos:

- Microcontrolador ESP32.
- LED.
- Resistores (se necessário para limitar a corrente do LED).
- Smartphone Android com o aplicativo instalado.

## Configuração:

1. Monte o circuito conforme o esquemático fornecido.
2. Carregue o código no ESP32 para estabelecer a comunicação Bluetooth Serial e aguardar comandos do aplicativo.
3. Instale o aplicativo no smartphone Android.

## Esquemático do Circuito:


    ESP32          LED
     |             |
     |             |
GPIO_Pin ---> Resistor ---> LED ---> GND


## Instalação do Aplicativo:

1. Faça o download do arquivo APK do aplicativo.
2. Abra o APK no seu smartphone Android e siga as instruções para instalar o aplicativo.


## Uso:

1. Abra o aplicativo no seu smartphone.
2. Ative o Bluetooth do smartphone e pareie-o com o ESP32.
3. Na interface do aplicativo, você verá um botão para ligar e desligar o LED.
4. Pressione o botão correspondente para controlar o LED remotamente via Bluetooth.