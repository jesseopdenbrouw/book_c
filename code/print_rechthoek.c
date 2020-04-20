#include <stdio.h>
#include <assert.h>

void print_lijn(int lengte) {

    assert (lengte > 2 && lengte < 80);
    for (int teller = 0; teller < lengte; teller++) {
        printf("+");
    }
    printf("\n");
}

void print_rechthoek(int breedte, int hoogte) {

    assert (hoogte > 2 && hoogte < 40);
    print_lijn(breedte);
    for (int regel = 0; regel < hoogte - 2; regel++) {
        printf("+");
        for (int teller = 0; teller < breedte - 2; teller++) {
            printf(" ");
        }
        printf("+\n");
    }
    print_lijn(breedte);
}

int main(void) {

    print_rechthoek(20, 8);
    return 0;
}
