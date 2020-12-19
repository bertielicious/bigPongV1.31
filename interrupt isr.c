#include "config.h"
void interrupt isr(void)
{
    if(PIR1bits.TMR1IF==HI)
    {
        TMR1H = 0x00;               // preload TMR1 to generate a 125ms interrupt
        TMR1L = 0x00;
        DIAGNOSTIC_LED = ~DIAGNOSTIC_LED;
        PIR1bits.TMR1IF = LO;   
    }   
}
