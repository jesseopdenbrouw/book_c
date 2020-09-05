#include <stdio.h>

double square_root(double s) {
double xiter = s; int i;
if (s == 0.0) return 0.0;
for (i = 0; i < 10; i = i + 1) xiter = 0.5 * (xiter + s / xiter); return xiter;}

int main(void)
{
    double i;

    for (i = 0.0; i < 11.0; i = i + 1.0)
    {
        printf("De wortel van %6.3f is %.6f\n", i, square_root(i));
    }

    return 0;
}
