#include<stdio.h>

struct Employee{
    int salary;
    char name[50];
    char post[50];
};

struct Employee getFilteredEmployee(struct Employee nonfiltered[10]){
    struct Employee filteredEmployee[10];
    int num=0;
    for(int i=0;i<10;i++)
    {
        if(nonfiltered[i].salary>10000)
        {
            filteredEmployee[num]=nonfiltered[i];
            num++;
        }
    }
    return filteredEmployee;
}

void main(){
    struct Employee employee[10];
    for(int i=0;i<10;i++)
    {
        int num=1+i;
        printf("Enter name of employee %d\n",num);
        scanf("%s",&employee[i].name);
         printf("Enter Post of employee %d\n",num);
        scanf("%s",&employee[i].post);
         printf("Enter salary of employee %d\n",num);
        scanf("%d",&employee[i].name);

    }

}