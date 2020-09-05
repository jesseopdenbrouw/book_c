#include <stdio.h>
#include <stdbool.h>

// print waarheidstabel voor de wetten van De Morgan
int main(void)
{
    printf("a b |!a+!b|!(a.b)|!a.!b|!(a+b)\n");
    printf("----+-----+------+-----+------\n");
    bool a = false;
    do
    {
        bool b = false;
        do
        {
            bool c = (!a || !b);
            bool d = !(a && b);
            bool e = (!a && !b);
            bool f = !(a || b);
            printf("%d %d |  %d  |  %d   |  %d  |  %d\n", a, b, c, d, e, f);
            b = !b;
        } while (b != false);
        a = !a;
    } while (a != false);
    return 0;
}
