#include <stdio.h>

int main(void)
{
	int ondergrens = 1, bovengrens = 10, stap = 1;
	int getal, kwadraat;

	getal = ondergrens;
	while (getal <= bovengrens)
	{
		kwadraat = getal * getal;
		printf("Het kwadraad van %3d is %3d\n", getal, kwadraat);
		getal = getal + stap;
	}

	return 0;
}