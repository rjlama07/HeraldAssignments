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

// Implementation

// This code defines a struct called "Employee" that has three fields: a character array called "name", an integer called "salary", and an integer called "hours_worked".

// The main function prompts the user to enter the name, salary, and hours worked of a new employee and stores the user's input in a variable of type "struct Employee" called "newEmp".

// The code then attempts to open a file called "employee.txt" in "append" mode and assigns the resulting file pointer to "fptr". If the file cannot be opened, it prints an error message.

// If the file was opened successfully, the code writes the name, salary, and hours worked of the "newEmp" employee to the file, separated by newlines. The file is then closed.