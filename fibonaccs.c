//write a program to print following pattern
//  0   1   1   2   3   5   8   13  21  ..... 100

#include<stdio.h>
void main()
{
    int previous,current,next;
    previous=0;
    current=1;
    printf("%6d %6d",previous,current);

for(;next<89;)
{
next=previous+current;//0+1//1 1+1//2 //2+1//3 3+2//5 5+3//8 8+5//13
printf("%6d",next);
previous=current;//1
current=next;//1
}
}