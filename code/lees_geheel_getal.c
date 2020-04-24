#include <stdio.h>

/* Keep Visual Studio happy */
#pragma warning(disable : 4996)

int lees_geheel_getal(int min, int max) {
    int getal, ret;

    printf("Geef een geheel getal [%d..%d]: ", min, max);
    ret = scanf("%d", &getal);

    while (ret != 1 || getal < min || getal > max) {
        char karakter;
        do {
            scanf("%c", &karakter);
        } while (karakter != '\n');
        printf("Onjuiste invoer. Probeer het opnieuw!\n");
        printf("Geef een geheel getal [%d..%d]: ", min, max);
        ret = scanf("%d", &getal);
    }
    return getal;
}

int main(void) {
    printf("Het ingelezen toetscijfer is %d.\n", lees_geheel_getal(1, 10));
    return 0;
}