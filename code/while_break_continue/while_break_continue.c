#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
	int som = 0;
	int i;

	while (1)
	{
		printf("Geef positief getal of 0 om te stoppen: ");
		scanf("%d", &i);
		if (i == 0)
		{
			break;
		}
		if (i < 0)
		{
			continue;
		}
		som = som + i;
	}
	printf("De som is %d\n", som);
}