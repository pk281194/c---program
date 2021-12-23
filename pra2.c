//findout interest calculate.....
#include <stdio.h>
void main()
{
    int principal, rate, year;
    float interest;

    printf("enter principal");
    scanf("%d", &principal);

    printf("enter rate");
    scanf("%d", &rate);

    printf("enter year");
    scanf("%d", &year);

    interest = principal * rate * year / 100;
    printf("%.2f", interest);
}