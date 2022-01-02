// example=two constant using #define & const

#define PI 3.14//1st method declare constant
#define COUNTRY "USA" // STRING
#define CODE 91

#include <stdio.h>

void main()
{
    const int A = 100;//2nd method declare constant
    const float ENERGY = 8.857;
    const char B = 'B';
    const long PINCODE = 364001;

    int radius;
    float area;

    printf("enter radius");
    scanf("%d",&radius);

    area=radius*radius*PI;
    printf("area = %.2f",area);

    printf("\n%.2f \n%s \n%d", PI, COUNTRY, CODE);
    printf("\n%d", A);
    printf("\n%f", ENERGY);
    printf("\n%c", B);
    printf("\n%ld", PINCODE);
}
