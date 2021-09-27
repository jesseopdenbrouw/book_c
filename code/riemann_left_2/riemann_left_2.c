#include <stdio.h>
#include <math.h>

double f(double x) {
    return -0.1*x*x*x + 0.5*x*x;
}

int main() {

    int k, n = 1000;

    double a = 0.0;
    double b = 5.0;

    double deltax = (b - a) / n;

    double sum = 0.0;

    for (k = 0; k < n; k++) {
        sum = sum + f(a + k * deltax) * deltax;
        printf("k: %d, sum: %f\n", k, sum);
    }
    printf("Left rule Riemann sum = %.20e\n", sum);
    return 0;
}
