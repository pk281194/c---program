/* 7) write a program to findout whether given number is perfect number or not
input : 6
output : perfect number
 https:/main/qph.fs.quoracdn.net/-qimg-37fc9a2bab37f10ab56df38d3e7b1351
*/
#include<stdio.h>
void main()
{
    int number,sum,divider,reminder;

    printf("\n enter number to finout whether given number is perfect number or not");
    scanf("%d",&number);

    divider = number/2;//6
    sum=0;

while (divider>=1)
{
    reminder=number % divider;//6%3

    if(reminder==0)
    {
     sum=sum+divider;//3
    }
    divider=divider-1;//2
}
    printf("\n sum=%d",sum);

    if(sum==number)  

    printf("\n %d is perfect number",number);

    else

    printf("\n %d is not perfect number",number);

}