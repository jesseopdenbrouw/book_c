#include <stdio.h>

int main(void)
{
	int ondergrens, bovengrens, stap;
	int getal, kwadraat;

	ondergrens = 1;
	bovengrens = 10;
	stap = 1;

	getal = ondergrens;
	while (getal <= bovengrens)
	{
		kwadraat = getal * getal;
		printf("Het kwadraad van %3d is %3d\n", getal, kwadraat);
		getal = getal + stap;
	}

	return 0;
}