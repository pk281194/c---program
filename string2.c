// write a program to convert given lowercase string into uppercase string
// input = parth vaghela
// output = PARTH VAGHELA

#include <stdio.h>
#include <string.h>
#define SIZE 128
void main()
{
    // create string
    // SYNTAX
    // char arrayname[SIZE]
    char line[SIZE];
    int ascii, position = 0;

    printf("enter string :");
    fgets(line, SIZE, stdin);

    do
    {
        if (line[position] == '\0')
        {
            break;
        }
        ascii = line[position]; // when character variable to integer variable it autmatically store ascii into integer variable

        if (ascii >= 97 && ascii <= 122)
        {
            ascii = ascii - 32;
            line[position] = ascii; // when character variable to integer variable it autmatically store ascii into integer variable
        }
        position++;
    } while (position < SIZE);

    printf("uppercase string = %s", line);
}