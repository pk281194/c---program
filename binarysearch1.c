#include <stdio.h>
void main()
{
    int value[11] = { 1,10,23,43,55,66,78,86,89,97,99};
    double number;
    int higher, lower, found = 0, size = 11, mid;

    printf("enter value search in array:");
    scanf("%d", &number);

    lower = 0;

    higher = size - 1;
    mid = 0;

    while (lower <= higher)
    {
        mid = (lower + higher) / 2; // 0+10/2=5(mid)

        if (number < value[mid])
        {
            higher = mid - 1;
        }
        else if (number > value[mid])
        {
            lower = mid + 1;
        }
        else if (number == value[mid]) // 23=23
        {
            printf("value found %d\n", mid);
            found = 1;
            break;
        }
    }
    if (found == 0) // 22 not found
    
    {
        printf("value not found");
    }
}