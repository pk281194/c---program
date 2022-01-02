//nested loop 1 to 10 printf......
#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    while (++i <= 5)//1 condition true 
    {
        while (++j <= 5)//1 true, 2true 3true 4true 5true 6 false
        {
            printf("%d\n", j);//1
        }
        printf("%d\n", j);//1
    }
}