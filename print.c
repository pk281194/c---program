#include<stdio.h>
void main()
{
    int number=0,n;
    printf("enter print amount into word");
    scanf("%d",&n);


while(n!=0)
     {
     number=(number*10)+(n%10);
       n/=10;
     }

while (number!=0)
    { 
switch(number%10)
    {
        case 1:
        printf("enter one");
        break;

        case 2:
        printf("enter second ");
        break;

        case 3:
        printf("enter third");
        break;

        case 4:
        printf("enter four");
        break;

        case 5:
        printf("enter five");
        break;
        
        case 6:
        printf("enter six");
        break;

        case 7:
        printf("enter sevan");
        break;

        case 8:
        printf("enter eight");
        break;

        case 9:
        printf("enter nine");
        break;
        
    }
   number=number/10;
  }
}