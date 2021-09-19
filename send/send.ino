#include <RFTransmitter.h>

// NODE_ID는 기기마다 고유해야함
#define NODE_ID          1
#define OUTPUT_PIN       12

RFTransmitter transmitter(OUTPUT_PIN, NODE_ID);

void setup() {}

void loop() {
  const char *msg = "BLUE !!!!";
  transmitter.send((byte *)msg, strlen(msg) + 1);

  delay(2000);

  transmitter.resend((byte *)msg, strlen(msg) + 1);
}