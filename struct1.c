//2nd method 
#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[30];
    float weight;
};
void display(struct student stud);
void main()
{
    
    struct student s1, s2;
    
    //how to change strcture member variable's value
    //structure-name.member-variable-name = value
    printf("enter 1st student  rollno");
    scanf("%d", &s1.rollno);

    printf("enter 1st student name");
    fflush(stdin);
    fgets(s1.name, 30, stdin);

    printf("enter 1st student weight");
    scanf("%f", &s1.weight);

    printf("enter 2nd student rollno");
    scanf("%d", &s2.rollno);

    printf("enter 2nd student name");
    fflush(stdin);
    fgets(s2.name, 30, stdin);

    printf("enter 2nd studnt weight");
    scanf("%f", &s2.weight);

    display(s1);
    display(s2);
}
//function display(body)
void display(struct student stud)
{
    printf("\n*********************************************************************\n");
    printf("\n rollno = %d",stud.rollno);
    printf("\n name = %s",stud.name);
    printf("\n weight = %.2f",stud.weight);
    printf("\n**********************************************************************\n");
}