#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("enter n value");
    scanf("%d", &n);
    for (i = 1; i < n; i++)//1,2,3...
    {

        if (n % i == 0)
        {
            sum = sum + i;//0+1=1 2+1=3 3+3=6 is perfect no...
        }
    }

    if (n == sum)
    {
        printf("it is perfect number");
    }
    else
    {
        printf("it is not perfect number");
    }
}