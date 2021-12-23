/*using for loop
5 4  3  2  1
5 4  3  2  1
5 4  3  2  1
5 4  3  2  1
5 4  3  2  1
*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {

        for (j = 5; j >= 1; j--)//only one line print 54321
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
}