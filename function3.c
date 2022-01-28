// 4) with argument & with return value function  such strlen
#include <stdio.h>
int getsquare(int number) // actual argument
{
    int square;
    square = number * number;
    return square;
}
float getpi()
{
    return 3.14;
}
float getarea(int radius)
{
    // area is local variable
    float area = getpi() * getsquare(radius);
    return area;
}
void main()
{
    int num, square, radius;
    float area;
    printf("enter number");
    scanf("%d", &num);
    square = getsquare(num); // calling function
                             // variable we pass in function when calling it are called formal arguments
    printf("square = %d", square);
    printf("\nenter radius of circle");
    scanf("%d", &radius);
    area = getarea(radius);
    printf("area = %.2f", area);
}
