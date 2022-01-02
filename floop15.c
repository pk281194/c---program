//while printing pattern.....(3nd method.)..
     /*  col  j5 j4 j3 j2 j1
   row i5   5 
       i4   5 4
       i3   5 4 3  
       i2   5 4 3 2   
       i1   5 4 3 2 1 */
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)//5 54 543 5432 5432
        {
            printf("%d",j);
        }
        printf("\n");
    }
}