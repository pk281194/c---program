#include <stdio.h>
union MartialInfo
{
    char ismarried; // t = married , f= unmarried
    int Noofchild;
};
void display(union MartialInfo info)
{
    printf("\n is married = %c", info.ismarried);
    printf("\n Noofchild = %d", info.Noofchild);
}
void main()
{
    union MartialInfo m1;
    m1.ismarried = 't';
    display(m1);
    m1.Noofchild = 1;
    display(m1);
}