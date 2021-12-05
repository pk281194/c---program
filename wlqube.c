//write a program to print following pattern
//1,8,27,64,125...1000(qube)
//1,2,3,4,5....

#include<stdio.h>
void main()
{
    int number,qube=0;
    number=1;

 while(qube<1000)

   {  
    qube=number*number*number;//1
    printf("\n %d",qube);
    number=number+1;//2
    }
}
