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
    int space,row,astrik;
    
    for(row=5;row>=1;row--)//outer loop
    {
        for(space=1;space<=row;space++)//inner loop 5 4 3 2 1 
    {
    printf(" ");
    }
    for(astrik=1;astrik<=(5-row)+1;astrik++)//1 2 3 4 5
    {
    printf("*");
    }
    printf("\n");
    }
}        