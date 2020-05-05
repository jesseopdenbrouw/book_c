#include <stdio.h>
#include <malloc.h>
#include <string.h>

#pragma warning(disable : 4996)

/* Define 1000 bytes of space*/
const size_t SIZE = 1000;

int main(void) {

	char *pstr = NULL;

	pstr = (char *) malloc(SIZE);

	if (pstr == NULL) {
		printf("Kan geheugen niet alloceren!");
		return 0;
	}

	strcpy(pstr, "Vul maar wat in");

	printf("%s", pstr);

	free(pstr);

	return 0;
}