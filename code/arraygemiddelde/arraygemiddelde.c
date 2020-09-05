#include <stdio.h>

int main(void)
{
	double lijst[5] = {3.14159, 2.78182, 0.57721, 1.41421, 1.61803};
	double som = 0.0;
	int index;

	for (index = 0; index < 5; index = index + 1) {
		som = som + lijst[index];
	}

	printf("Gemiddelde: %f\n", som / 5.0);

	return 0;
}