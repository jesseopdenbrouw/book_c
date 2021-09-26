#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
    int jaar;
    int isschrikkel;

    printf("Geef een jaartal op: ");

    scanf("%d", &jaar);

    isschrikkel = (jaar % 4 == 0 && jaar % 100 != 0) || jaar % 400 == 0;

    printf("Schrikkeljaar: %d\n", isschrikkel);

    return 0;
}