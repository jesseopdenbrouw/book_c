#include <stdio.h>

// tel af van 10 tot en met 0
int main(void)
{
    for (int getal = 10; getal >= 0; getal = getal - 1)
    {
        printf("%d\n", getal);
    }
    return 0;
}
