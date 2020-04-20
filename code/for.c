#include <stdio.h>

int main(void)
{
    int faculteit = 1;
    for (int i = 2; i <= 12; i = i + 1)
    {
        faculteit = faculteit * i;
    }
    printf("12! = %d\n", faculteit);
    return 0;
}
