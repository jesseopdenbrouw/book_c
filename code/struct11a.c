#include <stdio.h>

typedef struct
{
    float temperatuur;
    struct {
        int snelheid;
        char richting[4];
    } wind;
} Weerdata;

int main(void)
{
    Weerdata weermeting = {17.3, {25, "WSW"}};
    printf("Weermeting: %4.1f C %3d km/h %-3s\n", weermeting.temperatuur, weermeting.wind.snelheid, weermeting.wind.richting);
    return 0;
}
