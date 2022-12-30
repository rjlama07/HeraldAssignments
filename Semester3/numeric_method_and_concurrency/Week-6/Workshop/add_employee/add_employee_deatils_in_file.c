#include <stdio.h>

struct Employee
{
    char name[50];
    int salary;
    int hours_worked;
};

void getData(struct Employee *employee)
{
    for (int i = 0; i < 5; i++)
    {
        int num = i + 1;
        printf("Enter name of Employee %d:", num);
        scanf("%s", &employee[i].name);
        printf("Enter salary of Employee %s:", employee[i].name);
        scanf("%d", &employee[i].salary);
        printf("Enter Hours worked of %s:", employee[i].name);
        scanf("%d", &employee[i].hours_worked);
        printf("\n\n******************************\n\n"); /// THis is just to make it look better
    }
}

void main()
{
    FILE *emp;
    struct Employee employee[5];
    emp = fopen("employee.txt", "w");
    getData(employee);
    for (int i = 0; i < 5; i++)
    {
        fprintf(emp, "Name:%s\nSalary:%d\nHoursWorked:%d\n", employee[i].name, employee[i].salary, employee[i].hours_worked);
        fprintf(emp, "\n");
    }
}