#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
};

void readStudent(struct student students[])
{
    for (int i = 0; i < 10; i++)
    {
        int num = i + 1;
        printf("Enter name of student %d:", num);
        scanf("%s", &students[i].name);
        printf("\nEnter roll no of studnet %d:", num);
        scanf("%d", &students[i].roll_no);
        printf("\nEnter marks of student %d:", num);
        scanf("%f", &students[i].marks);
    }
}

void displayStudents(struct student students[])
{
    for (int i = 0; i < 10; i++)
    {
        int num = i + 1;
        printf("\nThe name of student %d:%s", num, students[i].name);
        printf("\nThe roll no of student %d:%d", num, students[i].roll_no);
        printf("\n Marks of student %ds:%f", num, students[i].marks);
    }
}

void main()
{
    struct student s1[3];
    readStudent(s1);
    printf("\n");
    displayStudents(s1);
}