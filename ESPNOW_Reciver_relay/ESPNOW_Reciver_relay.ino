#include <ESP8266WiFi.h>
#include <espnow.h>

int relay = D5; //پین رله

typedef struct temp_struct {
  int x;
} temp_struct;

temp_struct myData;  //ذخیره دیتای دریافتی

void OnDataRecv(uint8_t * mac, uint8_t *incomingData, uint8_t len) {
  memcpy(&myData, incomingData, sizeof(myData));
  Serial.print("Bytes received: ");
  Serial.println(len);
  Serial.print("X= ");
  Serial.println(myData.x); //نمایش دیتای ذخیره شده
  Serial.println();
}
 
void setup() {
  Serial.begin(115200);

  pinMode(relay, LOW);
  
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  
  esp_now_set_self_role(ESP_NOW_ROLE_SLAVE);
  esp_now_register_recv_cb(OnDataRecv);
}
 
void loop() {

  if(myData.x == 1)
    {
      pinMode(relay, HIGH);     
    }else
   {
      pinMode(relay, LOW);
   }

}
