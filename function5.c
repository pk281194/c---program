// pass by reference in function
#include <stdio.h>
// variables which stored address of other variables are called pointer variables
void swap(int *x, int *y) // x=10,y=20;
{
    printf("inside function before change x=%d,y=%d", *x, *y);

    int temp = *x; // 10
    *x = *y;       // 20
    *y = temp;     // 10
    printf("\ninside function after change x=%d,y=%d", *x, *y);
}
void main()
{
    int a, b;
    printf("enter variable a value");
    scanf("%d", &a);

    printf("enter variable b value");
    scanf("%d", &b);

    swap(&a, &b); // calling function swap a=10,b=20;
    printf("\n in main a=%d and b=%d", a, b);
}
