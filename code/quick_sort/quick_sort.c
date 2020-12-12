#include <stdio.h>
#include <stdlib.h>

int cmpint(const void *a, const void *b) {

    /* explicit type cast to pointers to integers */
    return ( *(int*)a - *(int*)b );
}

int main() {

    int values[] = { 88, 56, 100, 2, 25 };

    printf("De array voor sorteren: \n");
    for (int n = 0; n < 5; n++) {
        printf("%d ", values[n]);
    }

    qsort(values, 5, sizeof(int), cmpint);

    printf("\nDe array na sorteren: \n");
    for (int n = 0; n < 5; n++) {
        printf("%d ", values[n]);
    }

    return(0);
}
