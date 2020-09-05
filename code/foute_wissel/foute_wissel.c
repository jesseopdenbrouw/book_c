#include <stdio.h>

void wissel(int a, int b) {

    int hulpje = a;
    a = b;
    b = hulpje;
}

int main(void) {

    int x = 7, y = 8;

    printf("x = %d en y = %d\n", x, y);
    wissel(x, y);
    printf("x = %d en y = %d\n", x, y);
    return 0;
}
