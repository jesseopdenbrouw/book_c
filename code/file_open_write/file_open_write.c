#include <stdio.h>

// Keep Visual Studio happy
#pragma warning(disable : 4996)

int main(void) {

	FILE *fp;
	int a = 3;

	fp = fopen("C:\\Users\\Cbook\\bestand.txt", "w");

	if (fp == NULL) {
		printf("Bestand kan niet worden geopend!");
		return -1;
	}

	fprintf(fp, "Dit is wat tekst: %d\n", a);

	fclose(fp);

	printf("Bestand is geschreven\n");

	return 0;
}