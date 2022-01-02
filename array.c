/* write a program to accept 5 subject mark from user display marks,total,average */

#include <stdio.h>
void main()
{
    int marks[5], position = 0, total = 0;
    float average;
    while (position < 5) // 0 1 2 3 4
    {
        printf("enter %d subject mark", position + 1); // 1
        scanf("%d", &marks[position]);
        total = total + marks[position];
        position = position + 1; // 1
    }
    average = total / 5;
    position = 0;
    do
    {

        printf("\n%d subject mark = %d", position + 1, marks[position]);
        position = position + 1;

    } while (position < 5);
    printf("\n total = %d average = %.2f", total, average);
}