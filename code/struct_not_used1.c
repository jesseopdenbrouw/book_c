#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int snelheid;
    char richting[4];
} Wind;

typedef struct
{
    float temperatuur;
    Wind wind;
} Weerdata;

Weerdata meet(void);
void sorteerMetingenOpWindsnelheid(Weerdata meting[], size_t aantalMetingen);
void printWeer(Weerdata w);

Weerdata meetWeer(void)
{
    // dummy implementatie bij gebrek aan echte sensors
    Weerdata w = {rand() % 410 / 10.0, {rand() % 126, "NO"}};
    return w;
}

void wissel(Wind *pw1, Wind *pw2)
{
    Wind hulp = *pw1;
    *pw1 = *pw2;
    *pw2 = hulp;
}

void sorteerMetingenOpWindsnelheid(Weerdata meting[], size_t aantalMetingen)
{
//  insertion sort alleen toepasbaar voor kleine aantallen
    for (size_t i = 1; i < aantalMetingen; i++)
    {
        for (size_t j = i; j > 0 && meting[j - 1].wind.snelheid > meting[j].wind.snelheid; j--)
        {
            wissel(&meting[j - 1], &meting[j]);
        }
    }
}

void printWeer(Weerdata w)
{
    printf("%4.1f C %3d km/h %s", w.temperatuur, w.wind.snelheid, w.wind.richting);
}

void printMetingen(Weerdata meting[], size_t aantalMetingen)
{
    for (size_t i = 0; i < aantalMetingen; i++)
    {
        printWeer(meting[i]);
        printf("\n");
    }
}

int main(void)
{
    srand(time(NULL));
    Weerdata meting[5];
    for (size_t i = 0; i < sizeof meting / sizeof meting[0]; i++)
    {
        meting[i] = meetWeer();
    }
    printf("Weermetingen:\n");
    printMetingen(meting, sizeof meting / sizeof meting[0]);
    printf("Weermetingen gesorteerd op windsnelheid:\n");
    sorteerMetingenOpWindsnelheid(meting, sizeof meting / sizeof meting[0]);
    printMetingen(meting, sizeof meting / sizeof meting[0]);

    return 0;
}
