////while printing pattern.....
     /*  col  j1 j2 j3 j4 j5
   row i1    *  
       i2    *  * 
       i3    *  *  *  
       i4    *  *  *  *  
       i5    *  *  *  *  *  */
#include <stdio.h>
void main()
{
    int i,j,number;
   
   i=1;
   while(i<=5)//row
   {
       j=1;
       while(j<=i)//column
       {
           printf("*");
           j++;
       }
       
       i++;
       printf("\n");
   }
   printf("bye...");
}