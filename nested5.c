/*
1
12
123
1234
12345
*/
#include<stdio.h>
void main()
{
    int i,j,row;
    printf("how many row");
    scanf("%d",&row);
    
    i=1;
  while(i<=row)
    
  {
    j=1;
    while(j<=i)
    {
     printf("%d",j);
     j++;
    }
     printf("\n");
     i++;
  }  

}