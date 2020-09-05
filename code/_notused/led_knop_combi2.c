#include <msp430.h> 

// MSP-EXP430G2 Launchpad met MSP430G2553:
// - rode led (LED1) op P1.0;
// - groene led (LED2)op P1.6;
// - drukknop (S2) naar aarde op P1.3.

// Dit programma laat de rode led branden zolang S2 wordt ingedrukt of pin P1.5 hoog is.
// Ingangspin P1.5 kan hoog gemaakt worden door deze pin via een draadje met de Vcc te verbinden. 

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer.
	P1DIR = 0b01000001; // Maak P1.0 en P1.6 uitgangen en alle andere pinnen van P1 ingangen.
	P1REN |= 0b00101000; // Zet pull-up weerstand bij P1.3 aan en 
	P1OUT |= 0b00001000; // zet pull-down weerstand bij P1.5 aan.
    while (1)
    {
        if ((P1IN & 0b00101000) != 0b00001000)
        {
            P1OUT |= 0b00000001;
        }
        else
        {
            P1OUT &= ~0b00000001;
        }
    }
    return 0;
}
