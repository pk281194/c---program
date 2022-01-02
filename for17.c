// write a program to print qube of all values between given range
/*
    start = 10
    stop  = 20
    qube = 1000,1331...... 8000
*/
#include <stdio.h>
void main()
{
    long start, stop, number, qube;
    printf("\n enter start value");
    scanf("%ld", &start);
    printf("\n enter stop value");
    scanf("%ld", &stop);

    for (number = start; number <= stop; number = number + 1)

    {
        qube = number * number * number; // 1000
        //  number=number+1;//10
        printf("%10ld", qube);
    }
}