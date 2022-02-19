#define F_CPU 16000000UL
#include<avr/io.h>
int main(){

	DDRD=0xFF;
  	DDRB=0xFF;
  
  	ADMUX=0b01000001;
  ADCSRA=0b10000111;
  DIDR0=0b00000010;
  while(1){
    ADCSRA=ADCSRA|(1<<ADSC);
    while(ADCSRA&(1<<ADIF)==0);
         PORTD=ADCL;
         PORTB=ADCH;
           }
  return 0;
}
