// write a program to print following series (triangular numbers)
//0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000//

#include<stdio.h>
int main()
{
    int num,count=1,result;
    printf("enter number");
    scanf("%d",&num);
    while(count<=num)
    {
        result=(count*(count+1));
        printf("%d",result);
        count++;
    }
    printf("\n end program");
}