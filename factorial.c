//write a program to find out & print factorial given number
// input:5
//process 5*4*3*2*1=120
#include<stdio.h>
void main()
{
    int number,factorial=1;
    printf("\n findout number of factorial");
    scanf("%d",&number);//5

    while(number>0)
    {

    factorial=number*factorial;//5
    number=number-1;//4
  
    }
    printf("\n %d=factorial",factorial);
}