#include <stdio.h>

int max(int getal1, int getal2) {

    if (getal1 > getal2) {
        return getal1;
    } else {
        return getal2;
    }
}

int main(void) {

    int i1, i2, i3;
    scanf("%d%d%d", &i1, &i2, &i3);
    printf("De maximale waarde is: %d\n", max(i1, max(i2, i3)));
    return 0;
}
