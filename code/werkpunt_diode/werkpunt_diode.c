#include <stdio.h>
#include <math.h>

//	\addplot [domain=0:1.9,samples=201,linecolor1,thick,name path=dline] gnuplot[id=diode]{1e-21*(exp(x/(1.4*0.02569257028945))-1)};

double R = 220.0;
double U0 = 5.0;
double Is = 1e-24;
double n = 1.4;
double Ut = 0.02569257028945;

// Load line voltage source and series resistor
double f(double U) {
	return -(1 / R) * U + (U0 / R);
}

// Load line diode or led
double g(double U) {
	return Is * (exp(U / (n * Ut)) - 1);
}


int main(void) {

	double low, mid, high;

	// Find operating point using bisection method
	low = 0.0; high = U0; mid = (high - low) / 2.0;
	printf("Iteration  0, Ud: %.16lf\n", mid);

	for (int i = 1; i <= 20; i++) {
		printf("Iteration %2d, ",i);
		if (f(mid) > g(mid)) {
			low = mid;
			mid = mid + (high - mid) / 2.0;
		}
		else if (f(mid) < g(mid)) {
			high = mid;
			mid = low + (mid - low) / 2.0;
		}
		else {
			break;
		}
		printf("Ud: %.16lf\n", mid);
	}

	printf("-----------------------\nUd: %.16lf\n", mid);
	printf("Id: %.16lf\n", f(mid));
}
