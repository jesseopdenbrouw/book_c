#include <stdio.h>

void wisselp(int* a, int* b) {

    int hulpje = *a;
    *a = *b;
    *b = hulpje;
}

int main(void)
{
    int x = 7, y = 8;
    printf("x = % d, y = % d\n", x, y);
    wisselp(&x, &y);
    printf("x = % d, y = % d\n", x, y);

    return 0;
}