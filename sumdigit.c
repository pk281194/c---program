/*9) write a program to make sum of all digit in given number 
input : 1234
output = 10 (1+2+3+4)*/

#include<stdio.h>
void main()
{
    int sum=0,num,reminder;
    printf("\n enter number");
    scanf("%d",&num);

 while(num>0)
{
    reminder=num%10;
    sum=sum+reminder;
    num=num/10;

}    
    printf("\n sum=%d",sum);

}