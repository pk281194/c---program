#include <stdio.h>
#include <string.h>
#define SIZE 64
#define COUNT 5
struct book
{
    char name[SIZE];
    char author[SIZE];
    int price;
};
void display(struct book b);
void main()
{
    struct book books[COUNT];
    int position=0;
    while(position<COUNT)
    {
        
        printf("Enter %d book detail",(position+1));
        printf("\n Enter book name");          fflush(stdin);      fgets(books[position].name,SIZE,stdin);
        printf("Enter author name");           fflush(stdin);      fgets(books[position].author,SIZE,stdin);
        printf("Enter book price");         scanf("%d",&books[position].price);
        position++;

    }
    position=0;
    while(position<COUNT)
    {
        printf("%d book detail",(position+1));
        display(books[position]);
    position++;//1

    }

}
void display(struct book b)
{
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\nbook name = %s",b.name);
    printf("\n author name = %s",b.author);
    printf("\n book price = %d",b.price);
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}