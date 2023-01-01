#include <stdio.h>

struct Employee
{
    char name[50];
    int salary;
    int hours_worked;
};

void main()
{
    FILE *fptr;
    struct Employee newEmp;
    printf("Enter employee name");
    scanf("%s", &newEmp.name);
    printf("Enter salary");
    scanf("%d", &newEmp.salary);
    printf("Enter hoursWorked");
    scanf("%d", &newEmp.hours_worked);
    fptr = fopen("employee.txt", "a");
    if (fptr == NULL)
    {
        printf("File not found");
    }
    else
    {
        fprintf(fptr, "\nName:%s\nSalary:%d\nHours_Worked:%d", newEmp.name, newEmp.salary, newEmp.hours_worked);
    }
    fclose(fptr);
}