#include <stdio.h>
#include <assert.h>

void print_in_talstelsel(unsigned int getal, int grondtal)
{
    assert(grondtal > 1 && grondtal < 38);
    if (getal >= grondtal)
    {
        print_in_talstelsel(getal / grondtal, grondtal);
    }
    int cijfer = getal % grondtal;
    if (cijfer < 10)
    {
        printf("%d", cijfer);
    }
    else
    {
        printf("%c", 'A' - 10 + cijfer);
    }
}

int main(void)
{
    print_in_talstelsel(1000, 2);
    printf("\n");
    print_in_talstelsel(1000, 7);
    printf("\n");
    print_in_talstelsel(1000, 10);
    printf("\n");
    print_in_talstelsel(1000, 16);
    printf("\n");
    print_in_talstelsel(51966, 16);
    printf("\n");
    return 0;
}
