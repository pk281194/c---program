//while printing pattern.....(3nd method.)..
     /*  col  j5 j4 j3 j2 j1
   row i5   5 
       i4   4 4
       i3   3 3 3  
       i2   2 2 2 2  
       i1   1 1 1 1 1 */
#include <stdio.h>
void main()
{
    int i, j;
    i = 5;
    while (i >= 1)
    {
        j = 5;
        while (j >= i)
        {
            printf("%d", i);
            j--;
        }
        i--;
        printf("\n");
    }
}
