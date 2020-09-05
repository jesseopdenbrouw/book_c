#include <stdio.h>

unsigned long long int faculteit(unsigned long long int n) {

    if (n <= 1) {
        return 1;
    }
    return n * faculteit(n - 1);
}

int main(void) {

    for (unsigned long long int i = 0; i <= 20; i++) {
        printf("%2llu! = %llu\n", i, faculteit(i));
    }
    return 0;
}
