#include <stdio.h>

typedef struct
{
    int snelheid;
    char richting[4];
} Wind;

void corigeerMeting(Wind *pw);

int main(void)
{
    Wind meting = {25, "WNW"};
    printf("%3d km/h %s\n", meting.snelheid, meting.richting);
    corigeerMeting(&meting);
    printf("Na correctie:\n");
    printf("%3d km/h %s\n", meting.snelheid, meting.richting);
    return 0;
}

void corigeerMeting(Wind *pw)
{
    (*pw).snelheid += 2;
}
