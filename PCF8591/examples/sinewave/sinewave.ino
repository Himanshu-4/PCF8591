#include"PCF8591.h"
PCF8591 p;
#define frequency 10

void setup(){
  
}
void loop(){
 
  for(int i =0; i<255; i++){
    p.dac(i);
    delay(frequency);
  }
  for(int i =255; i>0; i--){
    p.dac(i);
    delay(frequency);
  }
}
