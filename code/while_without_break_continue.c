#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int som = 0;
	int i;

	do
	{
		printf("Geef positief getal of 0 om te stoppen: ");
		scanf("%d", &i);
		if (i > 0)
		{
			som = som + i;
		}
	} while (i != 0);
	printf("De som is %d\n", som);
}