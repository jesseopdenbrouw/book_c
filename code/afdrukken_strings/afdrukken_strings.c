#include <stdio.h>

int main(void)
{
    char day[7][10] = { "zondag", "maandag", "dinsdag",
                        "woensdag", "donderdag", "vrijdag",
                        "zaterdag" };

    int aantal = sizeof day / sizeof day[0]; /* bereken aantal strings */

    for (int i = 0; i < aantal; i = i + 1)
    {
        printf("%s\n", day[i]);
    }

    return 0;
}