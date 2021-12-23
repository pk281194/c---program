//write a program to findout power of given number & given exponent
//input base10,exponent=4
//output 10*10*10*10=10,000
#include<stdio.h>
void main()
{
    int i=1,power=1,base,exponent;
    printf("enter base");
    scanf("%d",&base);//5

    printf("enter exponent");
    scanf("%d",&exponent);//3

    for(i=1;i<=exponent;i++)
{
   power=power*base;

}
printf("final result of %d power %d=%d",base,exponent,power);

}