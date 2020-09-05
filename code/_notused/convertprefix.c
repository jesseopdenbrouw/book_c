#include <stdio.h>

int main(void)
{
    double getal;
    char space, prefix, unit;
    printf("Geef een afstand in mm, cm of dm (bijvoorbeeld 2.6 dm): ");
    scanf("%lf%c%c%c", &getal, &space, &prefix, &unit);
    double prefixvalue = 0;
    if (space == ' ' && unit == 'm')
    {
        if (prefix == 'm')
        {
            prefixvalue = 0.001;
        }
        else
        {
            if (prefix == 'c')
            {
                prefixvalue = 0.01;
            }
            else
            {
                if (prefix == 'd')
                {
                    prefixvalue = 0.1;
                }
            }
        }
    }
    if (prefixvalue == 0)
    {
        printf("De invoer is niet correct!\n");
    }
    else
    {
        printf("Dit is %f meter\n", getal * prefixvalue);
    }
    return 0;
}
