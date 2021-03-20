# EspNow-Relay
Using the ESP-NOW protocol, we can remotely control and command a relay. In other words, we control electrical appliances with ESP-Now. It should be noted that in the open air, we can create a distance of 150 meters between the transmitter and the receiver.

## What it DO!
In this project, the transmitter board, which is intended for the nodemcu board with the ESP32 chip, is responsible for analyzing the position of a microswitch. On the other side of the scenario is the Wemos D1 MINI board, which is responsible for receiving these changes and thus activating and deactivating the relay module.

### Items needed
-ESP32
-Wemos
-Relay

### Required libraries
-esp_now
-WiFi

## Conclusion
In this project, using the ESP-NOW protocol, we sent the data to control a relay module from the destination ESP32 board to a Wemos board, which was responsible for controlling the relay module. Using this tutorial, you can control various electronic devices and them. Turn on or off with the relay.

 Full Tutorial at http://cifertech.net/
