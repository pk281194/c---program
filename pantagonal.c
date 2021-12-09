//write a program to print following series (pentagonalnumber)
//1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 300
//4 7 10 13 16 19 22
#include<stdio.h>
int main()
{
    int num,count=1,result;
    printf("enter number");
    scanf("%d",&num);
    while(count<=num)
    {
        result=(3*count*(count-1))/2+count;//3*3*2/2+3=12
        printf("%d",result);               
        
        count++;
    }
    printf("\n end program");
}