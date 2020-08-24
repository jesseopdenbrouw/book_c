#include <stdio.h>

int main(void) 
{
    int getal1, getal2;
    int maximum;

    printf("Geef twee gehele getallen: ");
    scanf("%d%d", &getal1, &getal2);

    if (getal1 > getal2) 
    {
        maximum = getal1;
    }
    else
    {
        maximum = getal2;
    }

    printf("Het maximum = %d\n", maximum);
    return 0;
}
