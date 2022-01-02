/* write a program to findout given value in array if value found print its position otherwise display message
value not found sequential search */

#include <stdio.h>
void main()
{
    float values[5] = {3.14, 5.90, 11.22, 23.36, 55.24}; // static initilization of array
    float value;
    int index = 0;
    printf("enter value to search in array");
    scanf("%f", &value);// 23.36
    while (index < 5)
    {
        if (values[index] == value)
        {
            printf("value found %d position", index + 1);
            break;
        }

        index = index + 1;
    }
    if (index == 5)
    {
        printf("value not found in array");
    }
}