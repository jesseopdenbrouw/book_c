#include <msp430.h> 

// MSP-EXP430G2 Launchpad met MSP430G2553:
// - rode led (LED1) op P1.0;
// - groene led (LED2)op P1.6;
// - drukknop (S2) naar aarde op P1.3.

// Dit programma zet de groene led aan.

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;
	P1DIR = BIT6 | BIT0;
    P1OUT |= BIT6;
    while (1);
    return 0;
}
