#include<stdio.h>
#include<string.h>
#define SIZE 64
#define COUNT 5
// create structure
struct fruit //user defined datatype
{
    //member variable
    char name[SIZE];//64 
    int price;//4
};//68byte
void display(struct fruit f);//only declaration
void main()
{
    //creating array variables of structure book type
    //struct structure-name array=variable-name;
    struct fruit fruits[COUNT];
    char fruitname[SIZE];//character 1D array (string)
    int position=0;//0 1 2 3 4 5

while(position<COUNT)
{
    printf("enter %d fruit detail:",(position+1));
    printf("\n enter fruit name : "); fflush(stdin); fgets(fruits[position].name,SIZE,stdin);
    printf("\n enter fruit price : "); scanf("%d",&fruits[position].price);
    position++;
}

printf("enter fruit name to search");
fflush(stdin);
fgets(fruitname,SIZE,stdin);
position=0;

while(position<COUNT)
{
    if(strcmp(fruitname,fruits[position].name)==0)
    {
        printf("fruit found");
        display(fruits[position]);
        break;
    }
    position++;
}
if(position==COUNT)

{
    printf("\n fruit not found");
}

}
void display(struct fruit f)

{
printf("\n****************************************************************\n");
printf("\n fruit name = %s",f.name);
printf("\n fruit price = %d",f.price);
printf("\n*****************************************************************\n");
}