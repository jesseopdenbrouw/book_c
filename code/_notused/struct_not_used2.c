#include <stdio.h>

typedef struct
{
    double x;
    double y;
} Punt;

void verwisselXenY(Punt *p)
{
    int hulp = (*p).x;
    (*p).x = (*p).y;
    (*p).y = hulp;
}

int main(void)
{
    Punt punt = {3.4, 7.6};
    printf("(%f,%f)\n", punt.x, punt.y);
    verwisselXenY(&punt);
    printf("(%f,%f)\n", punt.x, punt.y);

    return 0;
}
