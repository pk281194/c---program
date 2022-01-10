#include <stdio.h>
#include <string.h>
#define COUNT 6
#define SIZE 64
void main()
{
    int position = 0;
    char subject[COUNT][SIZE];
    while (position < COUNT)
    {
        printf("enter %d subject name :", position + 1);
        fgets(subject[position], SIZE, stdin); // file gets string
        position++;
    }
    for (position = 0; position < COUNT; position++)
    {
        printf("%d subject name = %s", position + 1, subject[position]);
    }
}