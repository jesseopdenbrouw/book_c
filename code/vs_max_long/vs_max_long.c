/****************************************

@author Jesse op den Brouw
@email J.E.J.opdenBrouw@hhs.nl
@institution The Hague University of Applied Sciences

Setting integers to the maximum values
and adding 1 which triggers an overflow
but in C there's no way to catch the
overflow. So be careful.

****************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int smax = 2147483647;
    unsigned int umax = 4294967295;

    printf("Integer max: %d\n", smax);
    smax = smax + 1;
    printf("Integer max: %d\n", smax);

    /* Use %u specifier to print unsigned int */
    printf("Unsigned integer max: %u\n", umax);
    umax = umax + 1;
    printf("Unsigned integer max: %u\n", umax);


    return 0;
}
