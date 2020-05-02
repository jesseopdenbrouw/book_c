#include <stdio.h>

int main(void) 
{
    int getal;

    printf("Geef een positief getal: ");
    scanf("%d", &getal);

    while (getal <= 0) 
    {
        printf("Helaas! Geef een positief getal: ");
        scanf("%d", &getal);
    }

    printf("Het ingevoerde getal = %d\n", getal);
    return 0;
}
