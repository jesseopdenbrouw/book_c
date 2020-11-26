#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 10; i = i + 1)
	{
		for (j = 1; j <= 5; j = j + 1)
		{
			printf("%2dx%d = %2d   ", i, j, i * j);
		}
		printf("\n");
	}
}