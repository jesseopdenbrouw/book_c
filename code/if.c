#include <stdio.h>

int main(void) 
{
    int getal;
    printf("Geef een geheel getal: ");
    scanf("%d", &getal);
    if (getal < 0) 
    {
        getal = -getal;
    }
    printf("De absolute waarde = %d\n", getal);
    return 0;
}