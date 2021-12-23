// A
// AB
// ABC
// ABCD
// ABCDE
#include <stdio.h>
void main()
{
    int i, j;
    char k;

    for (i = 1; i <= 5; i++) // ABCDE
    {
        for (j = 1; j <= i; j++) // ABCDE
        {
            printf(" %c ", j + 64);
        }
        printf("\n");
    }
}