#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
    double getal, prefixvalue;
    char space, prefix, unit;

    printf("Geef een afstand in mm, cm of dm (bv. 2.6 dm): ");
    scanf("%lf%c%c%c", &getal, &space, &prefix, &unit);
    
    if (space == ' ' && unit == 'm')
    {
        switch (prefix)
        {
        case 'm':
            prefixvalue = 0.001;
            break;
        case 'c':
            prefixvalue = 0.01;
            break;
        case 'd':
            prefixvalue = 0.1;
            break;
        }
    }
    
    if (prefixvalue == 0)
    {
        printf("De invoer is ongeldig!\n");
    }
    else
    {
        printf("Dit is %f meter\n", getal * prefixvalue);
    }
    
    return 0;
}