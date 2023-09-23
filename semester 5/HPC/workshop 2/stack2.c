#include <stdio.h>

#include <stdlib.h>

#define MAX_SIZE 10

typedef struct
{
    int arr[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *stack)
{
    stack->top = -1;
    printf("Stack intialized\n");
}

int checkEmpty(Stack *stack)
{
    if (stack->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack *stack)
{
    if (stack->top == MAX_SIZE - 1)

    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack *stack, int x)
{
    if (isFull(stack))
    {
        printf("stack is full");
    }
    else
    {

        stack->top++;
        stack->arr[stack->top] = x;

        printf("Pushed %d to the stack\n", x);
        printf("%d", stack->top);
    }
}

void pop(Stack *stack)
{
    if (checkEmpty(stack))
    {
        printf("Stack is empty");
    }
    else
    {
    }
}
void display(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements:\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d\n", stack->arr[i]);
    }
}

int main()
{
    printf("\nStack using pointer\n");
    Stack stack;
    initialize(&stack);
    int choice;
    int num;
    while (1)
    {
        printf("\n Choose the operation");
        printf("\n1. Push\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to be pushed: ");
            scanf("%d", &num);
            push(&stack, num);
            break;

        case 2:
            printf("Poppinggggggg");
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }

    return 1;
}