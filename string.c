#include<stdio.h>
#include<string.h>
#define SIZE 32
void main()

{
    char name[SIZE],surname[SIZE];
    printf("enter your name");
    fgets(name,SIZE,stdin);//standard input device

    printf("enter your surname");
    fgets(surname,SIZE,stdin);//fgets = file get string

    printf("name = %s",name);
    printf("surname = %s ",surname);
}