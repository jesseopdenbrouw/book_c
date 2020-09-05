#include <stdio.h>

int stringlength(char str[]) {

	int len;

	for (len = 0; str[len] != '\0'; len++);

	return len;
}

void stringcopy(char to[], char from[]) {

	for (int len = 0; (to[len] = from[len]) != '\0'; len++);
}

int stringcompare(char str1[], char str2[]) {

	int len = 0;

	while (str1[len] == str2[len] && str1[len++] != '\0');

	return str1[len] - str2[len];
}

void stringconcat(char to[], char from[]) {
	int i, j;

	for (i = j = 0; to[i] != '\0'; i++);

	while ((to[i++] = from[j++]) != '\0');
}

int main(void) {

	char string[] = "Ik ben een string";
	char naar[100];

	printf("Lengte is %d\n", stringlength(string));

	stringcopy(naar, string);

	printf("Kopie: %s\n", naar);

	printf("Strings zijn %sgelijk.\n",
						stringcompare(string, naar) ? "on" : "");

	stringconcat(naar, " en ik ben langer");

	printf("%s\n", naar);

	return 0;
}
