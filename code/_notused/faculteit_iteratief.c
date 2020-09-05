#include <stdio.h>

double faculteit(unsigned int n)
{
    double resultaat = 1;
    for (unsigned int i = 2; i <= n; i++)
    {
        resultaat = resultaat * i;
    }
    return resultaat;
}

int main(void)
{
    printf("23! = %.0f\n", faculteit(23));
    return 0;
}
