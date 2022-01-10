//write a program to make sum of two matrix into another matrix
#include <stdio.h>
#define ROWSIZE 3
#define CLOUMNSIZE 3
void main()

{
    // create 2d array
    //  datatype arrayname[rowsize][columnsize]
    float a[ROWSIZE][CLOUMNSIZE] = {{10, 20, 30}, {15, 25, 35}, {100, 200, 300}};
    float b[ROWSIZE][CLOUMNSIZE] = {{11, 21, 31}, {16, 26, 36}, {101, 201, 301}};
    float c[ROWSIZE][CLOUMNSIZE];

    int row, column;
    printf("\narray A\n");

    row = 0;
    while (row < ROWSIZE)

    {

        column = 0;
        while (column < CLOUMNSIZE)
        {

            printf("%7.2f", a[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }

    printf("\n array B\n");

    row = 0;
    while (row < ROWSIZE)
    {

        column = 0;
        while (column < CLOUMNSIZE)
        {
            printf("%7.2f", b[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }
    // sum
    row = 0;
    while (row < ROWSIZE)
    {
        column = 0;
        while (column < CLOUMNSIZE)
        {
            c[row][column] = a[row][column] + b[row][column];
            column++;
        }
        row++;
    }

    // C DISPLAY
    printf("\narray C\n");

    row = 0;
    while (row < ROWSIZE)
    {

        column = 0;
        while (column < CLOUMNSIZE)
        {
            printf("%7.2f", c[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }
}
