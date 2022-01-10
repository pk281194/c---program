// write a program to convert given uppercase string into lowercase string
// input = PARTH VAGHELA
// output = parth vaghela

#include <stdio.h>
#include <string.h>
#define SIZE 128
void main()
{
    char line[SIZE];
    int ascii, position = 0;

    printf("enter string :"); // PARTH
    fgets(line, SIZE, stdin); // file gets string

    do

    {

        if (line[position] == '\0') // when character variable to integer variable it autmatically store ascii into integer variable
        {
            break;
        }

        ascii = line[position];

        if (ascii >= 65 && ascii <= 90) // A TO Z
        {
            ascii = ascii + 32; // convert lower case formula
            line[position] = ascii;

            
        }
        position++;

     } while (position < SIZE);
            
        printf("lower case = %s", line);
    }
