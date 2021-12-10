#include<stdio.h>
void main()
{
    int number;
    printf("before for loop");
    for(number=1;number<=10;number=number+1)
    {
        printf("\n number=%d",number);
    }
    printf("\nafter for loop");
}