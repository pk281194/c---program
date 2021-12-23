//if&else check condition eligible age for drive..
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);

    if (age >= 90) // only valid 89
    {
        printf("you are above 90,you can not drive");
    }
    else
    {
        printf("you can drive\n");
    }
    if(age==50)//only 50 half century print otherwise not display message
    {
        printf("half century");
    }
}