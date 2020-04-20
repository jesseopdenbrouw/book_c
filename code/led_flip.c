#include <msp430.h> 

// MSP-EXP430G2 Launchpad met MSP430G2553:
// - rode led (LED1) op P1.0;
// - groene led (LED2)op P1.6;
// - drukknop (S2) naar aarde op P1.3.

// Dit programma inverteert de groene led.

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer.
    P1DIR = 0b01000001; // Maak P1.0 en P1.6 uitgangen en alle andere pinnen van P1 ingangen.
    P1OUT = P1OUT ^ 0b01000000; // Alleen pin P1.6 inverteren, de overige pinnen van poort P1 worden niet gewijzigd.
    while (1);
    return 0;
}
