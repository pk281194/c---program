/*
1) write a program to print following pattern using for & for loop 
    1 3 5 7 9 .... 100
*/    
#include<stdio.h>
void main()
{
    int row,number;
    printf("enter number");
    scanf("%d",& number);
    for(row=1;row<=number;row=row+2)
    {
        printf("%d",row);
   }
}