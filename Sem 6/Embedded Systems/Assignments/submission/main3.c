#include <reg51.h>

sbit mybit = P1^1;

void Msdelay(void)
 {
	 TL0 = 0x47; // registration number: 71
	 TH0 = 0xFF;
	 TR0 = 1;
	 while(TF0 == 0);
	 TR0=0;
	 TF0=0;
 }	 

 void main()
 {
	 TMOD = 0x01;
	 while(1){
		mybit = ~mybit;
		 Msdelay();
	 }
 }