/* findout body celsius temperature fahrenheit.
*/
#include <stdio.h>
void main()
{
    float celsius, far;

    printf("enter celsius value");
    scanf("%f", &celsius);

    far = (celsius * 9 / 5) + 32;
    printf("the value of celsius temperature fahrenheit is %f", far);
}