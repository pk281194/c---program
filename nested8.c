/* write a program to print following pattern
           *
          ** 
         ***
        ****
       *****
 */
#include<stdio.h>
void main()
{
    int space,row,coloumn;

    row=5;
    while(row>=1)
    {
      space=1;
      while(space<=row)
    {
      printf(" ");
      space++;
    }

    coloumn=1;
    while (coloumn<=(5-row)+1)
    {
        printf("*");
        coloumn++;
    }
    printf("\n");
    row--;
    }
}    
    

    
