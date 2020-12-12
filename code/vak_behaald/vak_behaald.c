#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int  toets1, toets2;

	printf("Geef cijfer deeltoets 1: ");
	scanf("%d", &toets1);
	printf("Geef cijfer deeltoets 1: ");
	scanf("%d", &toets2);

	if (toets1 + toets2 >= 11 && toets1 >= 4 && toets2 >= 4)
	{
		printf("Vak is behaald\n");
	}
	else
	{
		printf("Vak is niet behaald\n");
	}

	return 0;
}