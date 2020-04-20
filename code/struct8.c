#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct wind
{
    int snelheid;
    char richting[4];
};
typedef struct wind Wind;

Wind meetWind(void);
int bepaalGemiddeldeWindsnelheid(Wind meting[], size_t aantalMetingen);
void printWind(Wind w);
int bepaalWindkracht(int gemiddeldeWindsnelheid);

Wind meetWind(void)
{
    // dummy implementatie bij gebrek aan een echte sensor
    Wind w = {rand() % 126, "NO"};
    return w;
}

int bepaalGemiddeldeWindsnelheid(Wind meting[], size_t aantalMetingen)
{
    // bepaal gemiddelde windsnelheid
    int totaal = 0;
    for (size_t i = 0; i < aantalMetingen; i++)
    {
        totaal += meting[i].snelheid;
    }
    return totaal / aantalMetingen;
}

int bepaalWindkracht(int gemiddeldeWindsnelheid)
{
    int maxKmPerHourForBeaufort[] = {1, 5, 11, 19, 28, 38, 49, 61, 74, 88, 102, 117};
    size_t beaufort;
    for (beaufort = 0; beaufort < 12; beaufort++)
    {
        if (gemiddeldeWindsnelheid <= maxKmPerHourForBeaufort[beaufort])
        {
            break;
        }
    }
    return beaufort;
}

void printWind(Wind w)
{
    printf("%d km/h %s", w.snelheid, w.richting);
}

int main(void)
{
    srand(time(NULL));
    Wind meting[600];
    printf("De wind is ");
    printWind(meetWind());
    printf("\n");
    for (size_t i = 0; i < sizeof meting / sizeof meting[0]; i++)
    {
        meting[i] = meetWind();
    }
    int g = bepaalGemiddeldeWindsnelheid(meting, sizeof meting / sizeof meting[0]);
    printf("De gemiddelde windsnelheid is %d km/h\n", g);
    int b = bepaalWindkracht(g);
    printf("Dit komt overeen met windkracht %d\n", b);
    return 0;
}
