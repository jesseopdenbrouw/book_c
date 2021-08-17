#include <stdio.h>

int main(void) {
    int ary[] = { 0, 5, -1, 7, 3, 9 };
    int i, j, temp;

    for (i = 0; i < 6; i++) {
        for (j = 1; j < 6 - i; j++) {
            if (ary[j - 1] > ary[j]) {
                temp = ary[j];
                ary[j] = ary[j - 1];
                ary[j - 1] = temp;
            }
        }
    }
    for (i = 0; i < 6; i++) {
        printf("%d ", ary[i]);
    }
}
