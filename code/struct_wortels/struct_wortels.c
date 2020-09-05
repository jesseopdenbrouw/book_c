#include <stdio.h>
#include <math.h>

typedef struct {
	double x1;
	double x2;
	int geldig;
} wortels_t;

wortels_t bereken_wortels(double a, double b, double c) {
	wortels_t x12;

	double D = b * b - 4 * a * c;

	if (D < 0.0 || a == 0.0) {
		x12.geldig = 0;
		return x12;
	}

	x12.x1 = (-b + sqrt(D)) / (2.0 * a);
	x12.x2 = (-b - sqrt(D)) / (2.0 * a);
	x12.geldig = 1;
	return x12;
}

void print_wortels(wortels_t x12) {
	if (x12.geldig) {
		printf("x1: %f   ", x12.x1);
		printf("x2: %f\n", x12.x2);
	} else {
		printf("Uitkomst is niet geldig\n");
	}

}

int main(void) {

	wortels_t uitkomst;
	uitkomst = bereken_wortels(1.0, 2.0, -6.0);
	print_wortels(uitkomst);

	return 0;
}