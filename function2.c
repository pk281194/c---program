// 2) with argument without return value function.
#include <stdio.h>
// define function(create)
void printline(char letter, int count)
{
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
void main()
{
    printline('@', 100); // calling function
    printf("the easy learn acadmey");
    printline('*', 100);
    printf("c,c++,java,php,laravel,python,flutter,anguler,android,rect node");
    printline('^', 75);
}