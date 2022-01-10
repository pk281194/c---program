// write a program to count words  and length(actual characters) in given string
// name = parth vaghela
// output = length = 13, words = 2
#include <stdio.h>
#include <string.h>
#define SIZE 64
void main()
{   
    // create string
    // SYNTAX
    // char arrayname[SIZE]
    char fullname[SIZE];

    int words, length, postion = 0;
    words = 1;
    length = -1;
    printf("enter your fullname :");
    fgets(fullname, SIZE, stdin); // file gets string
    do
    {
        if (fullname[postion] == '\0')
        {
            break;
        }
        if (fullname[postion] == ' ')
        {
            words = words + 1;
        }
        length++;
        postion++;
    } while (postion < SIZE);
    printf("words=%d,length=%d", words, length);
}