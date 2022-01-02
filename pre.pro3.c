// pre increment,pro increment.....
// a=10,b;pre increment (++a)...
// x=10,y;post increment (x++)...
#include <stdio.h>
void main()
{
    int a = 10, b, x = 10, y;

    b = ++a; // pre increment//11,11

    printf("%d %d", a, b);

    y = x++; // post incrememt,11,10
    printf("\n%d %d", x, y);
}