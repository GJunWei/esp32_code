#include <Arduino.h>
#include <WiFi.h>
 
#define Key_17 17


 
void smart_config(void)
{
    WiFi.mode(WIFI_AP_STA);

    Serial.println("Waiting for SmartConfig.\r\n");
    WiFi.beginSmartConfig();
 
    // Wait for SmartConfig packet from mobile
    while (!WiFi.smartConfigDone())
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println("smartconfig Success!");
    Serial.printf("SSID:%s\r\n",WiFi.SSID().c_str());
    Serial.printf("localip:%s\r\n",WiFi.localIP());
    
    
}


void key()
{
    if(digitalRead(Key_17) == 0)
    {
        delay(2);
        if(digitalRead(Key_17) == 0)
        {
          smart_config();
          while (digitalRead(Key_17) == 0);
        }
    }
}
void setup()
{
    Serial.begin(115200);
    Serial.println("Serial Init...");
    pinMode(Key_17,INPUT_PULLUP);
    
    
}

void loop()
{
  key();
}