#include <stdio.h>

double faculteit(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * faculteit(n - 1);
}

int main(void)
{
    printf("20! = %.0f\n", faculteit(20));
    return 0;
}
