#include <stdio.h>

int main(void)
{
	printf("  |   1   2   3   4   5   6   7   8   9  10\n");
	printf("--+----------------------------------------\n");

	for (int i = 1; i < 11; i = i + 1)
	{
		printf("%2d|", i);
		for (int j = 1; j < 11; j = j + 1)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}

	return 0;
}