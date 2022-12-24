#include <stdio.h>
struct Student_info
{
    char name[50];
    int age;
    char dob[15];
};

struct Student
{
    int rollNumber;
    float marks;
    struct Student_info Student_info;
};

void main()
{
    struct Student students[3];
    for (int i = 0; i < 3; i++)
    {

        int num = i + 1;
        printf("Enter roll number of student %d:", num);
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks number of student %d:", num);
        scanf("%f", &students[i].marks);
        printf("Enter name of student %d:", num);
        scanf("%s", &students[i].Student_info.name);
        printf("Enter age of student %d:", num);
        scanf("%d", &students[i].Student_info.age);
        printf("Enter dob of student %d:", num);
        scanf("%s", &students[i].Student_info.dob);
        printf("*******************************\n");
    }
    for (int i = 0; i < 3; i++)
    {
        int num = i + 1;
        printf("Name is student %d is %s\n", num, students[i].Student_info.name);
        printf("Roll number of student %s is %d\n", students[i].Student_info.name, students[i].rollNumber);
        printf("Marks of student %s is %f\n", students[i].Student_info.name, students[i].marks);
        printf("DOB of student %s is %s\n", students[i].Student_info.name, students[i].Student_info.dob);
        printf("Age of student %s is %d\n", students[i].Student_info.name, students[i].Student_info.age);
        printf("*******************************\n");
    }
}
