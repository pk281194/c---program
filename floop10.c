 //for loop printing pattern.....
     /*  col  j1 j2 j3 j4 j5
   row i1    *  *  *  *  *
       i2    *  *  *  *  *
       i3    *  *  *  *  *
       i4    *  *  *  *  *
       i5    *  *  *  *  *  */
#include <stdio.h>
void main()
{
    int i,j;
    
    for(i=1;i<=5;i++)//row
    {
    for(j=1;j<=5;j++)//column
  {
      printf("*");
     
      }
  printf("\n");
}
}