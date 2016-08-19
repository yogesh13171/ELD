#define F_CPU 8000000UL //1 MHz
#include <avr/io.h>
#include <util/delay.h>

int main()
{   //Set Pin5 of PortB as output
    DDRB |= (1 << PB5);
    while(1) 
    {   // Set PIN5 of PortB High to turn on LED
        PORTB ^= (1 << PB5); 
	// Delay of 1s
        _delay_ms(1000);  
    }
    return 0;
} 
