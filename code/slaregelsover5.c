#include <stdio.h>

void sla_regels_over(int aantal) {
    for (int teller = 0; teller < aantal; teller++) {
        printf("\n");
    }
}

int main(void) {
    //  ...
    sla_regels_over(3);
    //  ...
    sla_regels_over(4);
    //  ...
    return 0;
}
