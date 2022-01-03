/* write a program to accept to arrange element in asending order (A TO Z) */

#include <stdio.h>
void main()
{
    int numbers[5], temp;
    int size = 5, i = 0, j, position;

    for (position = 0; position < size; position++)
    {
        printf("enter %d value", position + 1);
        scanf("%d", &numbers[position]);
    }
    while (i < size - 1)
    {
        for (j = i + 1; j < size; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
        i++;
    }
    position = 0;
    do
    {
        printf("\n numbers = %d", numbers[position]);
        position++;
    } while (position < size);
}