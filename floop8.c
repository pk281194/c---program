// forloop using sum..
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter n value"); // 5
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        sum = sum + i;
    }
    /*   i=1
        sum=sum+i;   sum=1
         i++;
        i=2;
        sum=sum+i;   sum=3
        i++;
          i=3;
        sum=sum+i;   sum=6
        i++;
        i=4;
        sum=sum+i;   sum=10
        i++;
        i=5;
        sum=sum+i;   sum=15*/

    printf("sum of first %d %d number is %d", n, sum); // 15
}