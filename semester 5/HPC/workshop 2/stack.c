#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("Stack is full");
    }

    else
    {
        printf("Enter the element to be pushed");
        scanf("%d", &x);
        top++;
        inp_array[top] = x;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("\n Perform Actions on the stack");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Show");
        printf("\n 4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice");
            break;
        }
    }
}