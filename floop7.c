// while loop using sum.....
#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("enter n value"); // 5
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {

        sum = sum + i; // 1
    /* i=2;
     sum=sum+i;
     i++;
     i=3;
     sum=sum+i;
     i++;
     i=4;
     sum=sum+i;
     i++;
     i=5;
     sum=sum+i;
     i++;*/

        i++; // 1,2,3,4,5
    }
    printf("sum of first %d number is %d", n, sum);//1
}