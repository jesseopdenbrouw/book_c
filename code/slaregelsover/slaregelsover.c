#include <stdio.h>

void sla_3_regels_over(void);

void sla_3_regels_over(void) {
    printf("\n");
    printf("\n");
    printf("\n");
}

void sla_regels_over(int aantal) {
    for (int teller = 0; teller < aantal; teller++) {
        printf("\n");
    }
}

int main(void) {
    //  ...
    printf("\n"); // sla 3 regels over
    printf("\n");
    printf("\n");
    //  ...
    printf("\n"); // sla 3 regels over
    printf("\n");
    printf("\n");
    //  ...

    //  ...
    sla_3_regels_over();
    //  ...
    sla_3_regels_over();
    //  ...

    //  ...
    printf("\n"); // sla 3 regels over
    printf("\n");
    printf("\n");
    //  ...
    printf("\n"); // sla 4 regels over
    printf("\n");
    printf("\n");
    printf("\n");
    //  ...

    //  ...
    sla_regels_over(3);
    //  ...
    sla_regels_over(4);
    //  ...

    return 0;
}

/*

void sla_3_regels_over(void) {
    printf("\n");
    printf("\n");
    printf("\n");
}
*/