#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Employee
{
    int salary;
    char name[50];
    char post[50];
};
void takeInput(struct Employee *employee)
{

    for (int i = 0; i < 10; i++)
    {
        int num = 1 + i;
        printf("Enter name of employee %d\n", num);
        scanf("%s", employee[i].name);
        printf("Enter Post of employee %d\n", num);
        scanf("%s", employee[i].post);
        printf("Enter salary of employee %d\n", num);
        scanf("%d", &employee[i].salary);
    }
}
struct Employee *getFilteredEmployee(struct Employee nonfiltered[10], int *num)
{

    struct Employee *filteredEmployee = (struct Employee *)malloc(sizeof(struct Employee) * 10);
    ;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {

        if (nonfiltered[i].salary > 10000)
        {
            strcpy(filteredEmployee[n].name, nonfiltered[i].name);
            strcpy(filteredEmployee[n].post, nonfiltered[i].post);
            filteredEmployee[n].salary = nonfiltered[i].salary;
            n++;
        }
    }
    *num = n;
    return filteredEmployee;
}
void display(struct Employee *employee, int *n)
{
    printf("\nEmployee having salary greater than 10000\n");
    for (int i = 0; i < *n; i++)
    {
        printf("Name is %s\n", employee[i].name);
        printf("Post of %s\n", employee[i].post);
        printf("Salary is %d\n", employee[i].salary);
        printf("************************************\n");
    }
}

void main()
{
    struct Employee employee[10];
    takeInput(employee);
    int num = 0;
    struct Employee *filtered = getFilteredEmployee(employee, &num);
    display(filtered, &num);
}