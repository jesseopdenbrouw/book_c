#include <stdio.h>

int main(void)
{
    struct 
    {
        int snelheid;
        char richting[4];
    } windmeting1 = {9, "W"}, windmeting2 = {25, "NNW"};
    printf("Windmeting 1: %3d km/h %-3s\n", windmeting1.snelheid, windmeting1.richting);
    printf("Windmeting 2: %3d km/h %-3s\n", windmeting2.snelheid, windmeting2.richting);
    return 0;
}
