#include <stdio.h>

#pragma warning(disable: 4996)

int main(void) {

    int i, tafel;

    do {
        printf("Geef getal tussen 1 en 10: ");
        scanf("%d", &tafel);
    } while (tafel < 1 || tafel > 10);

    for (i = 1; i < 11; i = i + 1) {
        printf("%3d x %3d = %3d\n", i, tafel, i * tafel);
    }
}