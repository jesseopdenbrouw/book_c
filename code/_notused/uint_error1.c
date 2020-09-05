#include <stdio.h>

// toon aan dat som van 1 + 2 + 3 + 4 + ... + n gelijk is aan (n + 1) * n / 2
int main(void)
{
    unsigned int n = 100000;
    unsigned int som = 0;
    for (unsigned int getal = 1; getal <= n; getal = getal + 1)
    {
        som = som + getal;
    }
    printf("som = %u\n", som);
    unsigned int formule = (n + 1) * n / 2;
    printf("formule = %u\n", formule);
    return 0;
}
