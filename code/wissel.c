#include <stdio.h>

void wissel(int *ptr_a, int *ptr_b)
{
    int hulpje = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = hulpje;
}

int main(void)
{
    int x = 7, y = 8;
    printf("x = %d en y = %d\n", x, y);
    wissel(&x, &y);
    printf("x = %d en y = %d\n", x, y);
    return 0;
}
