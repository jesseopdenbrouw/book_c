#include <stdio.h>

int geefterug(void) {
	static int count = 0;

	count++;

	return count;
}

int main(void) {

	for (int i = 0; i < 10; i++) {
		printf("Aanroep %d\n", geefterug());
	}

	return 0;
}