#include"PCF8591.h"

PCF8591 pc;

void setup(){
  
}
void loop(){

  int value = pc.adc(2);
  pc.dac(3);
  
}
