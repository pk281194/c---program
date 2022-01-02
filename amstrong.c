#include <stdio.h>
void main()
{
    int num, reminder, mod, result = 0;
    printf("enter number");
    scanf("%d", &num);
    mod=num; 
    while (mod > 0)
    {
        reminder = mod % 10;//37.1 3.71
        mod = mod / 10;
        result = result + reminder * reminder * reminder;
    }
    if(result==num)
    {
        printf("%d amstrong number",num);
    
    }
    else
    {
    printf("%d not amstrong number",num);
    
    }
}