/* write a program to accept to arrange element in asending order (A TO Z) */

#include <stdio.h>
void main()
{
    long numbers[5], temp;
    int size = 5, position = 0, i,j;

    while (position < size)//input
    {
        printf("enter %d value", position + 1); // 1
        scanf("%ld", &numbers[position]);
        position = position + 1; // 1
    }
    //sorting A TO Z
    for (i = 0; i < size - 1; i++)
    {

        for (j = i + 1; j < size; j++)
        {
            /* if (numbers[0]>numbers[1])//14>17
                {
                temp=numbers[0];//temp=14
               numbers[0]=numbers[1];//=14=17
               numbers[1]=temp;//=14
                }*/

            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
//display array
    position = 0;
    do
    {
        printf("\n numbers = %d", numbers[position]);
        position++;

    } while (position<size);
}