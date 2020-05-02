#include <stdio.h>

int main(void) 
{
    int getal;

    do 
    {
        printf("Geef een positief getal: ");
        scanf("%d", &getal);
    } 
    while (getal <= 0);

    printf("Het ingevoerde getal = %d\n", getal);
    return 0;
}
