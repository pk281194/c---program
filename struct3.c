#include<stdio.h>
#include<string.h>
#define SIZE 64
#define COUNT 3
struct fruit
{
    char name[SIZE];
    int price;
    float weight;
};
void display(struct fruit f);
void main()
{
    struct fruit fruits[COUNT];
    int position=0;
    while(position<COUNT)
{
    printf("enter %d fruit detail",(position+1));
    printf("\n enter fruit name ");   fflush(stdin);   fgets(fruits[position].name,SIZE,stdin);
    printf("\n enter fruit price ");  scanf("%d",&fruits[position].price);
    printf("\n enter fruit weight ");  scanf("%f",&fruits[position].weight);
    position++;
}

position=0;
while(position<COUNT)
{
    printf("%d fruit detail",(position+1));
    display(fruits[position]);
    position++;
}

}
void display(struct fruit f)

{
    printf("\n**********************************************\n");
    printf("\n fruit name = %s",f.name);
    printf("\n fruit price = %d",f.price);
    printf("\n fruit weight =%.2f",f.weight);
    printf("\n***********************************************\n");
}