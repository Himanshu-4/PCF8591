#include "PCF8591.h"

PCF8591::PCF8591(){
Wire.begin();
}
int16_t PCF8591::adc(uint8_t channel){

Wire.beginTransmission(pcf8591_addr_read);
Wire.write(0x00 | channel);
Wire.endTransmission();
Wire.requestFrom(pcf8591_addr_read,1);

return Wire.read();
}

void PCF8591::dac(uint8_t value){
Wire.beginTransmission(pcf8591_addr_write);
Wire.write(0x40);
Wire.write(value);
Wire.write(value);
Wire.endTransmission();

}