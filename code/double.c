#include <stdio.h>
#include <math.h>

// toon aan dat Fi (het i-de Fibonacci getal) gelijk is aan formule van Binet
int main(void)
{
    int n = 40;
    int i = 2;
    int Fi_min_2 = 0, Fi_min_1 = 1, Fi;
    while (i <= n)
    {
        Fi = Fi_min_1 + Fi_min_2;
        Fi_min_2 = Fi_min_1;
        Fi_min_1 = Fi;
        i = i + 1;
    }
    printf("F%d = %d\n", n, Fi);
    double formule = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
    printf("formule = %.0f\n", formule);
    return 0;
}
