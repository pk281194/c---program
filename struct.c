//simple program structure declaration...

#include <stdio.h>
#include <string.h>
// create structure
struct student
{
    int rollno;
    char name[30];
    float weight;
};
void display(struct student stud); // only declaration
void main()
{
    struct student s1, s2;
    s1.rollno = 1;
    strcpy(s1.name, "parth");
    s1.weight = 75;

    s2.rollno = 2;
    strcpy(s2.name, "sachin");
    s2.weight = 65;

    display(s1);
    display(s2);
}
void display(struct student stud)
{
    printf("\n**************************************\n");
    printf("\n Roll No = %d", stud.rollno);
    printf("\n name = %s", stud.name);
    printf("\n weight =%.2f", stud.weight);
    printf("\n *************************************\n");
}