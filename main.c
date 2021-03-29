/**************************************************
 *Author:Diego Silva
 *Date:29/03/2021
 *Description:Code for basic blink
 **************************************************/

#define F_CPU 16000000 //define frequency
#define WAITTIME 1000 //define time to wait 1s


//import librarys
#include <avr/io.h>
#include <util/delay.h>

int main(){

    //Direction is output
    //On Arduino this is the port digotal 13
    DDRB |= (1<<DDB5);

    while(1){

        //turn on led
        PORTB |= (1<<PORTB5);
        _delay_ms(WAITTIME);

        //turn off led
        PORTB &=~(1<<PORTB5);
        _delay_ms(WAITTIME);
    }

    return 0;
}