#include <stdio.h>

int lees_geheel_getal(int min, int max)
{
    int getal;
    printf("Geef een geheel getal [%d..%d]: ", min, max);
    while (scanf("%d", &getal) != 1 || getal < min || getal > max)
    {
        char karakter;
        do
        {
            scanf("%c", &karakter);
        }
        while (karakter != '\n');
        printf("Onjuiste invoer. Probeer het opnieuw!\n");
        printf("Geef een geheel getal [%d..%d]: ", min, max);
    }
    return getal;
}

int main(void)
{
    printf("Het ingelezen toetscijfer is %d.\n", lees_geheel_getal(1, 10));
    return 0;
}
