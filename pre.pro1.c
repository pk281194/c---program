#include<stdio.h>
void main()
{
    int x=5;
    x=x++ + ++x;// post & pre 
    printf("%d",x);
}