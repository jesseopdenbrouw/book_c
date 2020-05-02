#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i = i + 1)
	{
		printf("%d x 3 is %d\n", i, i * 3);
	}
	return 0;
}