/*
    write a program to print following pattern
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
#include<stdio.h>
void main()
{
    int row,column;
    
    for(row=5;row>=1;row--)
    {
    for(column=1;column<=row;column++)

    {
    printf("*");
    
    }
    printf("\n");
    }
}
    