#include <Arduino.h>


void setup() {

  DDRD&=0xF0;
  PORTD|=0xF0;

  DDRB|=0x0F;
  PORTB&=~0x0F;

  Serial.begin(9600);
}

void loop(){
  uint8_t value=PIND;
  value = value & 0xF0;
  value = value >>4;
  value = ~value;
  value = value & 0x0F;
  PORTB = (PORTB & ~0x0F) | value;

  


}

