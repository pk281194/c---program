// A
// B B
// C C C
//D D D D
//E E E E E

#include <stdio.h>
void main()
{
    int i, j;
    char k;

    for (i = 1; i <= 5; i++) // ABCDE
    {
        for (j = 1; j <= i; j++) // ABCDE
        {
            printf(" %c ", i + 64);
        }
        printf("\n");
    }
}