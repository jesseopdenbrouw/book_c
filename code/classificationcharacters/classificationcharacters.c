#include <stdio.h>
#include <ctype.h>

#pragma warning(disable : 4996)

int main(void) {

	char c;

	printf("Enter characters and press <enter>: ");
	scanf("%c", &c);

	while (c != '\n') {
		printf("Character '%c' is a", c);
		if (isprint(c)) {
			printf(" printable");
		}
		if (isdigit(c)) {
			printf(" digit");
		}
		if (isalpha(c)) {
			printf(" letter");
		}
		if (isspace(c)) {
			printf(" whitespace");
		}
		if (isxdigit(c)) {
			printf(" hexadecimal");
		}
		if (ispunct(c)) {
			printf(" punctuation");
		}
		if (islower(c)) {
			printf(" lower case");
		}
		if (isupper(c)) {
			printf(" upper case");
		}
		if (iscntrl(c)) {
			printf(" control");
		}
		printf("\n");
		scanf("%c", &c);
	}

	return 0;
}