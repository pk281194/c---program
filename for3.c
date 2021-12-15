/*
2) write a program to print following pattern using for loop 
    1 4 9 16 25 .... 2000
*/
#include<stdio.h>
int main()
{
    int limit,count;
    printf("enter the number");
    scanf("%d",&limit);
    
    for(count=1;count<=limit;count++)
    {
        printf("%d +",(count*count));
        
    }
    printf("\n");
}