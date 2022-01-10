// 2-dimensional array....

#include <stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 3
void main()
{
      // create 2d array
    // datatype arrayname[rowsize][columnsize]
      int marks[ROWSIZE][COLUMNSIZE], row, column;
      for (row = 0; row < ROWSIZE; row++)
      {
            printf("\nprovide %d student detail:", (row + 1));

            for (column = 0; column < COLUMNSIZE; column++)
            {
                  printf("\nenter %d subject marks", (column + 1));
                  scanf("%d", &marks[row][column]);
            }
      }

      row = 0;
      while (row < ROWSIZE)
      {

            column = 0;
            while (column < COLUMNSIZE)
            {
                  printf("%10d", marks[row][column]);
                  column++;
            }
            printf("\n");
            row++;
      }
}