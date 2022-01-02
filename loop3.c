//while loop using even number program print 2,4,6,8,10......
#include <stdio.h>
void main()
{
    int i;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("i=%d\n", i);
        }
        ++i;
    }
}