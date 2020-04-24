#include <stdio.h>

void printdec(int getal) {
    if (getal > 9) {
        printdec(getal / 10);
    }
    printf("%d", getal % 10);
}

int main(void) {
    int i = 3961;

    printdec(i);
    return 0;
}