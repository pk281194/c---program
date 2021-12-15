#include<stdio.h>
void main()
{
    int number,reminder,divider,count;
printf("\n123");
number=5;
count=3;

    while (count <= 100)
    {

    reminder=number%2; //0 1
    divider=number/2; //10
    while (divider >= 2)   
{
    reminder=number%divider;//21 10.5 10
    if(reminder == 0)
     break;
    else
    divider=divider-1;//9
}
    if(reminder==1)
    {
    printf("%d",number);
    count=count+1;
    }
    number=number+2;
}
}