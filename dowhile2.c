/*
write a program to calculate compound interest of given amount,rate,year.
*/
#include <stdio.h>
void main()
{
    long amount; // 1000
    float rate;  // 10%
    short year,count;  // 3
    float interest, totalamount;//1464

    printf("\n enter amount");
    scanf("%ld", &amount);

    printf("\n enter rate");
    scanf("%f", &rate);

    printf("\n enter year");
    scanf("%hd", &year);

    totalamount = amount;
    count = 1;

    do
    {
        interest = totalamount * rate * 1 / 100; // 100
        totalamount = totalamount + interest;    // 1100
        count++;

    } while (count <= year);

    printf("totalamount=%.2f", totalamount);
    printf("\ngood bye...");

    /*interest=totalamount*rate*1/100;//110
    totalamount=totalamount+interest;//1210

    interest=totalamount*rate*1/100;//121
    totalamount=totalamount+interest;//1331

    interest=totalamount*rate*1/100;//133
    totalamount=totalamount+interest;//1464

    interest=totalamount*rate*1/100;//146
    totalamount=totalamount+interest;//1610
    */
}