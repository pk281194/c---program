/* using while loop ...
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

#include <stdio.h>
void main()
{
    int i, j;
    j = 1;
    while (j <= 5)
    {
        i = 1;
        while (i <= 5)
        {
            printf(" * ");
            i++;
        }

        j++;
        printf("\n");
    }
}