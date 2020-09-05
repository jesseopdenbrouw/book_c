#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int calls = 0;

unsigned long long int fib(unsigned long long int n) {

    calls = calls + 1;

    //if (calls < 0) {
    //    printf("Error: calls counter overflow!\n");
    //    exit(1);
    //}

    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}


int main() {
    
    int i = 1;

    for (i = 37; i < 44; i++) {
        calls = 0;
        clock_t starttime = clock(), endtime;

        printf("Fib(%d) = %llu, ", i, fib(i));
        endtime = clock() - starttime;

        printf("Calls: %lld, ", calls);
        printf("Time: %d\n", endtime);
    }

    return 0;
}
