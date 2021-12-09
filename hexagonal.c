//write a program to print following series (hexagonal number)
//1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
#include<stdio.h>
int main()
{
    int num,count=1,result;
    printf("enter number");
    scanf("%d",&num);
    while(count<=num)
    {
        result=(4*count*(count-1))/2+count;//4*5*4/2+5=45
        printf("%d",result);               
        
        count++;
    }
    printf("\n end program");
}