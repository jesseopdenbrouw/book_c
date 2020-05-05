#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x)*sin(x);
}

int main() {

    int i, n = 1000;

    double left = 0.0;
    double right = 6.28318530717958647692;

    double step = (right - left) / n;

    double sum = 0.0;

    for (i = 0; i < n; i++) {
        sum = sum + f(left + i*step) * step;
        printf("i: %d, sum: %f\n", i, sum);
    }
    printf("Left rule Riemann sum = %.20e\n", sum);
    return 0;
}
