#include <stdio.h>

int main(void)
{
    int aantal;
    do
    {
        printf("Hoeveel elementen moet de array bevatten? ");
        scanf("%d", &aantal);

    }
    while (aantal <= 0);
    int rij[aantal];
    printf("De array rij is %zu bytes groot.\n", sizeof rij);
    return 0;
}
