#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i = i + 2)
    {
        printf("i = %d\n", i);
    }
    for (int k = 5; k > 0; k--)
    {
        printf("k = %d\n", k);
    }
    for (int m = 1024; m < 4000; m = m * 2)
    {
        for (int n =  m; n > 0; n = n / 2)
        {
            printf("m = %d en n = %d\n", m, n);
        }
    }
    return 0;
}
