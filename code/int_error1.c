#include <stdio.h>

// toon aan dat som van 1 + 2 + 3 + 4 + ... + n gelijk is aan (n + 1) * n / 2
// dit programma geeft een incorrect antwoord!
int main(void)
{
    int n = 50000;
    int som = 0;
    for (int getal = 1; getal <= n; getal = getal + 1)
    {
        som = som + getal;
    }
    printf("som = %d\n", som);
    int formule = (n + 1) * n / 2;
    printf("formule = %d\n", formule);
    return 0;
}
