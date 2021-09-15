#include <VirtualWire.h>
 
const int TX_DIO_Pin = 12; // default 12
 
 
void setup()
{
  vw_set_tx_pin(TX_DIO_Pin); // Initialize TX pin
  vw_setup(2000); // Transfer speed : 2000 bits per sec
}
 
void loop()
{
  send("KIMDONGHWAN");
  delay(1000);
}
 
void send (char *message)
{
  vw_send((uint8_t *)message, strlen(message));
  vw_wait_tx(); // Wait until the whole message is gone
}