#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int i, getal, som = 0;

	printf("Som van vijf getallen\n\n");

	for (i = 1; i <= 5; i = i + 1)
	{
		printf("Geef getal %d: ", i);
		scanf("%d", &getal);

		som = som + getal;
	}
	printf("\nDe som is: %d\n", som);
}