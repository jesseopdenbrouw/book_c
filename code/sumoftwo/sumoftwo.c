#include <stdio.h>

/* Make Visual Studio happy */
#pragma warning(disable : 4996)

int main(void)
{
    int a;
    int b;

    int som;

    printf("Geef een getal: ");
    scanf("%d", &a);

    printf("Geef nog een getal: ");
    scanf("%d", &b);

    som = a + b;

    printf("De som van %d en %d is %d\n", a, b, som);

    return 0;
}