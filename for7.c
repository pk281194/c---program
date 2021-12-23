/*
12345
1234
123
12
1
*/
#include <stdio.h>
void main()
{
    int i, j, row;

    printf("enter number row");
    scanf("%d", &row);
    for (i = row; i >= 1; --i)
    {
        for (j = 1; j >= i; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}