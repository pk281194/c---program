/*
    write a program to print following pattern
    1
    22
    333
    4444
    55555
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
         printf("%d",outer);
        inner++;
      }
    
      printf("\n");
      outer++;
    }
}
