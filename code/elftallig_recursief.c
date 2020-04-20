#include <stdio.h>

void printInElftalligStelsel(unsigned int getal)
{
    if (getal >= 11)
    {
        printInElftalligStelsel(getal / 11);
    }
    int cijfer = getal % 11;
    if (cijfer < 10)
    {
        printf("%d", cijfer);
    }
    else
    {
        printf("A");
    }
}

int main(void)
{
    printInElftalligStelsel(361);
    return 0;
}
