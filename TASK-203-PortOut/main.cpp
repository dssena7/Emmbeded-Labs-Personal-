#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2
#define LEDMASK 0b0000000001001100
#define LEDMASK_2 0b00100000010000001 //Set pins pb_0, pb_7 and pb_14 to 1
// Objects
//BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
PortOut leds(PortC, LEDMASK);
PortOut led(PortB, LEDMASK_2);
int main()
{
    while (true) {

        leds = leds^ LEDMASK; // FLASHING LEDS USING XOR operator
         wait_us(500000);
        /*leds = 0;   //Binary 000
        led = 0 ;
        wait_us(500000);
        leds =  0xFF;   //Binary 11111111
        led = 0x7FFF;
        wait_us(500000); */   
    }
}




