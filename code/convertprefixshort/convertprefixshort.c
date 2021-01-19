#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
    char prefix;
    double prefixvalue = 1.0;

    printf("Geef een prefix (m, c, d) : ");
    scanf("%c", &prefix);

    switch (prefix)
    {
    case 'm': prefixvalue = 0.001;
              break;
    case 'c': prefixvalue = 0.01;
              break;
    case 'd': prefixvalue = 0.1;
              break;
    }

    printf("Vermenigvuldigfactor: %f\n", prefixvalue);
    return 0;
}