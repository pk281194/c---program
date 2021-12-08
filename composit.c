/*
 8) write a program to findout whether given number is composite number or not
process refer below url
https://cdn-skill.splashmath.com/panel-uploads/GlossaryTerm/d85dea10628d43e7aceaf9e06dc1493a/1559642561_List-of-composite-numbers-chart-1-to-100.png
*/
#include<stdio.h>
void main()
{
    int number,divider,reminder;
    printf("\n enter number to findout whether given number is composite number or not ");
    scanf("%d",&number);

    if(number==2 || number % 2==0)//8

      {
        printf("it is composite number");
      }
    else
     {
        divider=number-1;//7
        while(divider>1)
 {
       reminder=number%divider;//1

     if (reminder==0)
     {
    printf("\n it is composite number");
    break;
     } 
divider=divider-1;
 }
   if (divider==1)
       printf("\nit is not composite number");
     }
}