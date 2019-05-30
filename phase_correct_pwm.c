#include <mega128.h>

void main()
{
 TCCR1A=0b00001011;
 TCCR1B=0x05;
 
 OCR1CH=0x00;
 OCR1CL=0xCD;
 
 TCNT1H=0x00;
 TCNT1L=0x00;
 
 DDRA=0xFF;
 PORTA=0x00;
 
 DDRB=0x80;
 PORTB=0x00;
 
 
 while(1)
 {
   if(PINB&0x80)
   {
    PORTA=0xFF;
   }           
   else
   {
    PORTA=0x00;
   }
 }


}