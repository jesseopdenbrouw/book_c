#include <stdio.h>

#pragma warning(disable : 4996)

int main(void) {
	FILE* fp;
	char ch;

	fp = fopen("C:\\Users\\Cbook\\bestand.txt", "r");

	if (fp == NULL) 	{
		printf("Bestand kan niet geopend worden\n");
		return -1;
	}

	while (fscanf(fp, "%c", &ch) == 1) {
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}