/*
    write a program to print following pattern
    *
    **
    ***
    ****
    *****
*/
#include<stdio.h>
void main()
{
    int inner,outer;
    outer=1;
    while(outer<=5)
    {
        inner=1;
       while(inner<=outer)
       
      {
         printf("*");
        inner++;
      }
    
      printf("\n");
      outer++;
    }
}
