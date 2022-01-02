//nested loop post increment...
#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    while (i++ <= 3)
    {
        while (j++ <= 3)
        {

        }
        printf("\n%d ", j);
    }
}