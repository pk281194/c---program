#include<stdio.h>
void main()
{
    int rating;
    printf("enter rating 1 to 5");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
    printf("it is 1st rating\n");
    break;

    case 2:
    printf("it is 2nd rating\n");
    break;

    case 3:
    printf("it is 3rd rating\n");
    break;

    case 4:
    printf("it is 4th rating\n");
    break;

    case 5:
    printf("it is 5th rating\n");
    break;
    
    default:
    printf("it is invalid rating\n");
    break;
    }
}