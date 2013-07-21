#if defined(ARDUINO) && ARDUINO > 18   // Arduino 0019 or later
#include <SPI.h>
#endif
#include <Wire.h>
#include <Ethernet.h>
//#include <EthernetDNS.h>  //Only needed in Arduino 0023 or earlier
#include <Arduino2Weibo.h>
#define LIB_DOMAIN "2.jiyeqian.duapp.com"
// Ethernet Shield Settings
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

// Substitute an address on your own network here
byte ip[] = {192,168,137,176};

char msg[] = "Hello Weibo, I'm Arduino!";
//IPAddress server(202,108,23,171); 
EthernetClient client;
void setup()
{
  Wire.begin();
  delay(1000);
  Ethernet.begin(mac,ip);
  Serial.begin(9600);
  
  Serial.println("Connecting ...");
   if (client.connect(LIB_DOMAIN, 80))
   {
    Serial.println("connected");
    // Make a HTTP request:
    client.print("GET /dir/?type=");
    client.print("put");
    client.print("&name=");
    client.print("12"); 
    client.print(" HTTP/1.1");
    client.println();
    client.println("Host: " LIB_DOMAIN);
    client.println("Connection: keep-alive");
    } 
  else {
    Serial.println("Connection failed.");
  }
  
}

void loop()
{
 Serial.println("nanhai");
    if (client.available()) {
    char c = client.read();
    Serial.print(c);
  }

  // if the server's disconnected, stop the client:
  if (!client.connected()) {
    Serial.println();
    Serial.println("disconnecting.");
    client.stop();

    // do nothing forevermore:
    for(;;)
      ;
  }
}
