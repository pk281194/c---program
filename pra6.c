//use if & else and or operater 
#include <stdio.h>
void main()
{
    int maths, science, history;
    float total;

    printf("enter maths marks");
    scanf("%d", &maths);

    printf("enter science marks");
    scanf("%d", &science);

    printf("enter history marks");
    scanf("%d", &history);

    total = (maths + science + history) / 3;
    if (total < 40 || maths < 33 || science < 33 || history < 33)
    {
        printf("your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("your total percentage is %f and you are pass\n", total);
    }
}