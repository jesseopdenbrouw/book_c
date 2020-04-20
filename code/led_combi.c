#include <msp430.h> 

// MSP430G2553:
// Alle pinnen op P1 zijn uitgangen.

// In dit programma worden P1.4 en P1.2 hoog gemaakt, P1.5 en P1.1 laag gemaakt en P1.7, P1.6 en P1.0 geïnverteerd

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer.
    P1DIR = 0b11111111; // Maak alle pinnen van poort P1 uitgangen.
    P1OUT = 0b01011010; // Willekeurige test waarde op poort P1.
    P1OUT |= 0b00010100; // Alleen P1.4 en P1.2 hoog maken.
    P1OUT &= ~0b00100010; // Alleen P1.5 en P1.1 laag maken.
    P1OUT ^= 0b11000001; // Alleen P1.7, P1.6 en P1.0 inverteren.
    while (1);
    return 0;
}
