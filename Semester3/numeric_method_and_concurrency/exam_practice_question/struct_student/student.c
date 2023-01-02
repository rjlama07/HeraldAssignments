#include <stdio.h>

struct Student
{
    int rollno;
    int marks;
    struct student_info
    {
        char name[100];
        char dob[50];
        int age;
    };
};
void main()
{
    struct Student std[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter student name:");
        scanf("%s", std[i].name);
        printf("Enter student age:");
        scanf("%d", &std[i].age);
        printf("Enter student marks:");
        scanf("%d", &std[i].marks);
        printf("Enter student rollno:");
        scanf("%d", &std[i].rollno);
        printf("Enter student dob:");
        scanf("%s", std[i].dob);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name:%s\n", std[i].name);
        printf("DOB:%s\n", std[i].dob);
        printf("Marks:%d\n", std[i].marks);
        printf("Rollno:%d\n", std[i].rollno);
        printf("Age:%d\n", std[i].age);
        printf("\n");
    }
}