#include <stdio.h>

double gemiddelde(int getal1, int getal2, int getal3)
{
    double resultaat = (getal1 + getal2 + getal3) / 3.0;
    return resultaat;
}

int main(void)
{
    double gem = gemiddelde(27, 29, 33);
    printf("%f\n", gem);
    return 0;
}
