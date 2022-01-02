// write a program to make sum of all digit in given number
/*
    input : 12345
    process = 1+2+3+4+5 = 15
    output = 15
*/
#include <stdio.h>
void main()
{
    int amount, reminder, sum;
    printf("enter amount"); // 12345
    scanf("%d", &amount);

    for (sum = 0; amount >= 1; amount = amount / 10)
    {

        reminder = amount % 10; // 5
        sum = sum + reminder;   // 5
        // amount=amuont/10;//1234.5
    }
    printf("sum=%d", sum);
}
