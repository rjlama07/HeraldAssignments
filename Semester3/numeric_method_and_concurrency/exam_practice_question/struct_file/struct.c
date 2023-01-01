#include <stdio.h>

struct Employee
{
    char name[10];
    int age;
    int salary;
};

void takeInput(struct Employee *employee)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter employee name");
        scanf("%s", &employee[i].name);
        printf("Enter employee age");
        scanf("%d", &employee[i].age);
        printf("Enter employee salary");
        scanf("%d", &employee[i].salary);
    }
}

void main()
{
    struct Employee employee[5];
    takeInput(employee);
    printf(employee[0].name);
    FILE *emp;
    emp = fopen("employee.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        fprintf(emp, "Name:%s\nAge:%d\nSalary:%d\n", employee[i].name, employee[i].age, employee[i].salary);
    }
    fclose(emp);
}