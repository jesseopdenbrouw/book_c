#include <stdio.h>

// tel af van 10 tot en met 0
int main(void)
{
    for (unsigned int getal = 10; getal >= 0; getal = getal - 1)
    {
        printf("%u\n", getal);
    }
    return 0;
}
