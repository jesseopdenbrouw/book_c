#include <stdio.h>

double gemiddelde(int getal1, int getal2, int getal3) {

    return (getal1 + getal2 + getal3) / 3.0;
}

int main(void) {

    printf("%f\n", gemiddelde(27, 29, 33));
    return 0;
}
