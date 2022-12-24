#include <stdio.h>
struct Employee
{
    char names[50];
    float salary;
    int hours_of_worked;
};
void userInput(struct Employee *employees)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of employee:");
        scanf("%s", employees[i].names);
        printf("Enter salary of Employee:");
        scanf("%f", &employees[i].salary);
        printf("Enter hours of worked by employee:");
        scanf("%d", &employees[i].hours_of_worked);
        printf("\n");
    }
}
void displayInfo(struct Employee *employee)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Name of employee is %s\n", employee[i].names);
        printf("Salary of employee is %f\n", employee[i].salary);
        printf("Hours worked of employee is %d\n", employee[i].hours_of_worked);
        printf("\n");
    }
}

void main()
{
    struct Employee employess[3];
    userInput(employess);
    for (int i = 0; i < 3; i++)
    {
        if (employess[i].hours_of_worked >= 8 && employess[i].salary < 10)
        {
            employess[i].salary += 50;
        }
        else if (employess[i].hours_of_worked >= 10 && employess[i].salary < 12)
        {
            employess[i].salary += 100;
        }
        else if (employess[i].hours_of_worked >= 12)
        {
            employess[i].salary += 150;
        }
    }
    displayInfo(employess);
}