#include <stdio.h>
#include <string.h>
#define SIZE 32
void main()
{
    char name1[SIZE], name2[SIZE];
    int ascii1, ascii2, position = 0, issame = 1;

    printf("enter first name :");
    fgets(name1, SIZE, stdin);

    printf("enter second name :");
    fgets(name2, SIZE, stdin);
    do
    {
        if (name1[position] == '\0' || name2[position] == '\0')
        {
            break;
        }
        else
        {
            ascii1 = name1[position];
            ascii2 = name2[position];

            if (ascii1 == ascii2)

            {
                position++;
                continue;
            }
            else if (ascii1 < ascii2)
            {
                issame = 0;
                printf("%s is bigger than %s", name2, name1);
                break;
            }
            else
            {
                issame = 0;
                printf("%s is bigger than %s", name1, name2);
                break;
            }
        }

    } while (position < SIZE);
    if (issame == 1)
        printf("both string are same");
}
