#include <stdio.h>
#include <malloc.h>
struct Employee
{
    char name[50];
    int salary;
    int hours_of_worked;
};
void userInput(struct Employee *employees, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("Enter name of employee:");
        scanf("%s", employees[i].name);
        printf("Enter salary of Employee:");
        scanf("%d", &employees[i].salary);
        printf("Enter hours of worked by employee:");
        scanf("%d", &employees[i].hours_of_worked);
        printf("\n");
    }
}
void higestSalary(struct Employee *employees, int *n)
{
    int index = 0;
    int higestSalary = employees[0].salary;

    for (int i = 0; i < *n; i++)
    {
        if (employees[i].salary > higestSalary)
        {
            higestSalary = employees[i].salary;
            index = i;
        }
    }
    printf("%s has the higest salary of %d", employees[index].name, higestSalary);
}

void main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d", &n);
    struct Employee *employee = (struct Employee *)malloc(n * sizeof(struct Employee));
    userInput(employee, &n);
    higestSalary(employee, &n);
    free(employee);
}
