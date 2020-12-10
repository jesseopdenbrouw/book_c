#include <stdio.h>

char *find_token(char* str, char ch) {

    if (str == NULL) {       /* sanity check */
        return NULL;
    }

    while (*str != '\0') {   /* while not end of string */
        if (*str == ch) {    /* if character found ... */
            return str;      /* return pointer */
        }
        str++;
    }

    return NULL;             /* character not found */
}

int main(void) {

    char chartofind = 'l';
    char string[] = "Hello world!";

    char *ptr = find_token(string, chartofind);

    if (ptr == NULL) {
        printf("Karakter %c niet gevonden!\n", chartofind);
    } else {
        printf("Karakter %c gevonden op adres %p\n", chartofind, ptr);
    }
}