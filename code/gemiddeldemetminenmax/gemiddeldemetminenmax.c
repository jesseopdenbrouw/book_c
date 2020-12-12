#include <stdio.h>

#pragma warning(disable : 4996)

double gemiddeldeminmax(int aantal, double *min, double *max) {

	int teller;

	double som, getal;

	printf("Geef getal 1: ");
	scanf("%lf", &getal);
	som = *min = *max = getal;

	for (teller = 2; teller <= aantal; teller++) {
		printf("Geef getal %d: ", teller);
		scanf("%lf", &getal);

		som += getal;

		if (getal > *max) {
			*max = getal;
		} else if (getal < *min) {
			*min = getal;
		}
	}

	return som / aantal;
}

int main(void) {

	double mainmin, mainmax, maingem;

	printf("Geef 5 getallen.\n\n");

	maingem = gemiddeldeminmax(5, &mainmin, &mainmax);

	printf("Gemiddelde %lf, minimum %lf, maximum %lf\n",
		                             maingem, mainmin, mainmax);

	return 0;
}