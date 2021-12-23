/*USING WHILE LOOP
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include <stdio.h>
void main()
{
    int i, j;
    char n;
    j = 1;
    while (j <= 5)
    {
        i = 1;
        while (i <= 5)
        {
            printf(" %c ", (j + 64));
            i++;
        }

        j++;
        printf("\n");
    }
}