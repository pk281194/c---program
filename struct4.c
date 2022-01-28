//serching structure
#include <stdio.h>
#include <string.h>
#define SIZE 64
#define COUNT 5
struct book
{
    char name[SIZE];   // 64 bytes
    char author[SIZE]; // 64 bytes
    int price;         // 4 byte
};                     // 132 byte
void display(struct book b);
void main()
{
    struct book books[COUNT];
    char bookname[SIZE];
    int position = 0;
    while (position < COUNT)
    {

        printf("Enter %d book detail",(position + 1)); //
        printf("\n enter book name");   fflush(stdin);  fgets(books[position].name, SIZE, stdin);
        printf("\n enter author name"); fflush(stdin);  fgets(books[position].author, SIZE, stdin);
        printf("enter price");          scanf("%d", &books[position].price);
        position++;
    }
    printf("enter book name to search");
    fflush(stdin);
    fgets(bookname, SIZE, stdin);

    position = 0;

    while (position < COUNT)
    {
        if (strcmp(bookname, books[position].name) == 0)
        {
            printf("book found...");
            display(books[position]);
            break;
        }
        position++;
    }
    
}
void display(struct book b)
{

    printf("\n *********************************************************** \n ");
    printf("\n Book Name = %s", b.name);
    printf("\n Author Name = %s", b.author);
    printf("\n Price = %d", b.price);
    printf("\n *********************************************************** \n ");
}
