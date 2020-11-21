#include <stdio.h>

/* Make Visual Studio heappy */
#pragma warning(disable : 4996)

int main(void)
{
	int aantal, teller;

	printf("Geef een getal groter dan 1: ");
	scanf("%d", &aantal);

	for (teller = 1; teller <= aantal; teller = teller + 1)
	{
		printf("Ik ben gek\n");
		printf("en jij ook\n");
	}

	return 0;
}