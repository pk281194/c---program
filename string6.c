/*write a program to count vowels,digits,consonent,words,symbols in string
input:parth vaghela1234 !@#$
output:vowel=4,digit=4,constant=8,space=2,symbols=4...*/

#include <stdio.h>
#include <string.h>
#define SIZE 128
void main()
{
    int digit = 0, vowel = 0, constant = 0, space = 0, i = 0, symbols = 0; // initialization
    char line[SIZE];

    printf("enter string name:"); // parth
    fgets(line, SIZE, stdin);

    do
    {
        if (line[i] == '\0') // null
        {
            break;
        }
        else if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') // vowel
        {
            vowel++;
        }

        else if (line[i] >= '0' && line[i] <= '9') // digit
        {
            digit++;
        }
        else if (line[i] >= 'a' && line[i] <= 'z') // constant
        {
            constant++;
        }
        else if (line[i] == ' ') // space
        {
            space++;
        }
        else if (line[i] >= 0 && line[i] <= 40) // symbols
        {
            symbols++;
        }
        i++;
    } while (line[i] < SIZE);

    printf("vowel=%d", vowel);
    printf("\ndigit=%d", digit);
    printf("\nconstant=%d", constant);
    printf("\nspace=%d", space);
    printf("\nsymbols=%d", symbols);
}
