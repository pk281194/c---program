// find out income tax program
//income            tax
//2.5 to 5.0 lakh    0.05
//5.0 to 10.0lakh    0.20
//10.00 above        0.30
#include <stdio.h>
void main()
{
    float tax = 0, income;
    printf("enter income");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);//0+0.05*260000-2500000=500 tax

    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("your net income tax to be paid 26th of the month is%.2f\n", tax);
}