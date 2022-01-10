/*
write a program to transose matrix into another matrix
        matrix     =    matrix t
       10,20,30          10,40,70
       40,50,60          20,50,80
       70 80,90          30,60,90  */

#include <stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 3

void main()

{
    int mat[ROWSIZE][COLUMNSIZE], mat1[ROWSIZE][COLUMNSIZE], row, column;
    row = 0;
    while (row < ROWSIZE)
    {
        printf("\nenter %d matrix detail:", row + 1); // enter 1 matrix

        column = 0;
        while (column < COLUMNSIZE)
        {
            printf("\nenter %d matrix value:", column + 1); // enter 1 matrix value
            scanf("%d", &mat[row][column]);
            column++;
        }
        row++;
    }

    row = 0;
    while (row < ROWSIZE)
    {
        column = 0;
        while (column < COLUMNSIZE)
        {

            printf("%10d", mat[row][column]); // 00 01 02 //10 11 12 //20 21 22

            column++;
        }
        printf("\n");
        row++;
    }
    row = 0;
    while (row < ROWSIZE)
    {
        column = 0;
        while (column < COLUMNSIZE)
        {
            mat1[column][row] = mat[row][column]; // 00 10 20 = 00 01 02
            column++;
        }
        printf("\n");
        row++;
    }
    row = 0;
    while (row < ROWSIZE)
    {
        column = 0;
        while (column < COLUMNSIZE)
        {
            printf("%10d", mat1[row][column]); // 00 10 20
            column++;
        }
        printf("\n");
        row++;
    }
}