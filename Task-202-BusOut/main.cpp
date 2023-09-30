#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

#define led_0  PB_0
#define led_7  PB_7
#define led_14 PB_14

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
BusOut led_2( led_0, led_7, led_14);
int main()
{
    while (true) {


        led_2 = 0;  // Onboard leds off
        leds = 0;   //Binary 000
        wait_us(500000);
        leds = 1;   //Binary 001
        led_2 = 7;   //Onboard leds on
        wait_us(500000); 
        leds = 2;   //Binary 010
        led_2 = 0; // Onboard leds off
        wait_us(500000);
        leds = 3;   //Binary 011
        led_2 = 7;   //Onboard leds on
        wait_us(500000);    
        leds = 4;   //Binary 100
        led_2 = 0; // Onboard leds off
        wait_us(500000);
        leds = 5;   //Binary 101
        led_2 = 7;   //Onboard leds on
        wait_us(500000);    
        leds = 6;   //Binary 110
        led_2 = 0; // Onboard leds off
        wait_us(500000);
        leds = 7;   //Binary 111
        led_2 = 7;   //Onboard leds on
        wait_us(500000);       
    }
}


