// using while & for program..
/* 1 1 1 1 1
   2 2 2 2 2
   3 3 3 3 3
   4 4 4 4 4
   5 5 5 5 5
*/
#include <stdio.h>
void main()
{
    int i, j;
    i = 1;
    while (i <= 5)
    {

        for (j = 1; j <= 5; j++)
        {
            printf(" %d ", i);
        }
        i++;
        printf("\n");
    }
}