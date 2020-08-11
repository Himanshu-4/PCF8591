#ifndef PCF8591_H

#define PCF8591_H

#include "Wire.h"
#include <Arduino.h>

#if defined (__AVR)
#define pcf8591_addr_read 0x91>>1

#define pcf8591_addr_write 0x90>>1

class PCF8591 {
    public:
    PCF8591();

    int16_t adc(uint8_t );
    void  dac(uint8_t =0 );

};
#endif
#endif