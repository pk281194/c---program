 /* three pattern use....
   *             1            1
   * *           2 2          2 1
   * * *         3 3 3        3 2 1
   * * * *       4 4 4 4      4 3 2 1  
   * * * * *     5 5 5 5 5    5 4 3 2 1 */

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
printf("%d",i);//i/p(*)=o/p pattern ("%d",j);=o/p 1 21 321 
        }
        printf("\n");
    }
}