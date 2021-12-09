/*write a program to print following series (Lucas series)
2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300 */
#include<stdio.h>
void main()
{
    int a=2,b=1,c,n;
    printf("how many number");
    scanf("%d",&n);
    while(b<=n)
    {
        printf("%d",a);

        c=a+b;//3
        a=b;
        b=c;//1
        
    }
    
}
