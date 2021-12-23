// ternary operater
#include <stdio.h>
void main()
{
    int a;
    printf("enter number");
    scanf("%d", &a);

    (a < 5) ? printf("a is less then 5") : printf("a is grater than 5");
}