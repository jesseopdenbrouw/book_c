#include <stdio.h>

#define kwadraat(A) ((A) * (A))

#define max(A,B,D) if ((A) > (B)) { D = (A); } else { D = (B); }

#define swap(A, B) \
    int temp = A; \
    A = B; \
    B = temp
    

int main(void)
{
    int c;

    max(2, 3, c);

    printf("c = %d\n", c);

    int x = 2, y = 3;

    swap(x, y);

    printf("x = % d, y = % d\n", x, y);
}