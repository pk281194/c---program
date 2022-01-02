#include <stdio.h>
void main()
{
    char c;
    short s;

    printf(" of char : %d byte(s)\n", sizeof(c));   //o/p  // 1 byte
    printf(" of short : %d byte(s)\n", sizeof(s));    // 2 byte
    printf(" of float: %d byte(s)\n", sizeof(float));//data type // 4 byte
}