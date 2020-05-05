#include <stdio.h>

// Keep Visual Studio happy
#pragma warning(disable : 4996)

int main(void) {

	char regel[100];
	int dag, maand, jaar;
	int valid = 0;

	printf("Geef een datum op: ");
	fgets(regel, sizeof regel, stdin);

	if (sscanf(regel, "%d %d %d", &dag, &maand, &jaar) == 3) {
		valid = 1;
	}
	else if (sscanf(regel, "%d/%d/%d", &dag, &maand, &jaar) == 3) {
		valid = 1;
	}
	else if (sscanf(regel, "%d-%d-%d", &dag, &maand, &jaar) == 3) {
		valid = 1;
	}

	if (valid) {
		sprintf(regel, "Geldige datum: %d %d %d\n",
			                                     dag, maand, jaar);
	}
	else {
		sprintf(regel, "Ongeldige datum opgegeven\n");
	}

	puts(regel);

	return 0;
}