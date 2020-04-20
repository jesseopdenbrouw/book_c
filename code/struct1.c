#include <stdio.h>
#include <string.h>

struct wind
{
    int snelheid;
    char richting[4];
};

int main(void)
{
    struct wind windmeting1, windmeting2;
    windmeting1.snelheid = 9;
    strcpy(windmeting1.richting, "W");
    windmeting2.snelheid = 25;
    strcpy(windmeting2.richting, "NNW");
    printf("Windmeting 1: %3d km/h %-3s\n", windmeting1.snelheid, windmeting1.richting);
    printf("Windmeting 2: %3d km/h %-3s\n", windmeting2.snelheid, windmeting2.richting);
    return 0;
}
