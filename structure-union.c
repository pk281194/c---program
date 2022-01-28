#include <stdio.h>
#include <string.h>
#define SIZE 64
struct product // outer
{
    char name[SIZE];
    int price;
    union detail // inner
    {
        long size; // in byte
        float weight;
    } info; // info is variable of detail type
};
void display(struct product prod)
{
    printf("\nproduct name = %s", prod.name);
    printf("\nprice = %d", prod.price);
    printf("\nweight =%.2f", prod.info.weight);
    printf("\nsize(in bytes) = %ld", prod.info.size);
}
void main()
{
    struct product p1, p2;
    strcpy(p1.name, "iphone 13");
    p1.price = 120000;
    p1.info.weight = 194.00;
    display(p1);

    strcpy(p2.name, "eset antivirus");
    p2.price = 1500;
    p2.info.size = 100 * 1024 * 1024; // bytes * kilobyte *megabyte
    display(p2);
}