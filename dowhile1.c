/*
syntax
do
{
    statment...

}while(condition);
write a program to print multiplication table of given number
input5
output5*1=5
     5*2=10
     5*3=15
     5*4=20
     5*5=25
*/
#include <stdio.h>
void main()
{
    int number, multiplier = 1, result; // muliplier =1 it is called declaration with initilization
    printf("\n enter number");
    scanf("%d", &number);
    do
    {
        result = number * multiplier; // 5
        printf("\n %5d x %d = %3d", number, multiplier, result);
        multiplier++; // multliper=multiplier+1

    } while (multiplier <= 10);

    printf("\n program end....");
}
