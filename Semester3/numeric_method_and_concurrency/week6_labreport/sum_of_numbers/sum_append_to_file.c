#include <stdio.h>

void main()
{
    int sum = 0;
    int n;
    printf("Enter the number of elements you want to add");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int new;
        printf("Enter number you want to add");
        scanf("%d", &new);
        sum += new;
    }
    FILE *fptr;
    fptr = fopen("sum.txt", "a");
    fprintf(fptr, "\nSum:%d\n", sum);
    printf("Sum added sucessfully");
    fclose(fptr);
}

// Implementation
// This code includes the "stdio.h" header file, which contains declarations for input/output functions such as "printf" and "scanf".
// The main function prompts the user for the number of elements they want to add, and stores this value in the "n" variable.
// It then enters a loop that iterates "n" times, prompting the user for a number to add each time and adding it to the "sum" variable.
// After the loop has completed, the code opens the file "sum.txt" in "append" mode and writes the final value of "sum" to the file. It then prints a message indicating that the sum was added successfully and closes the file.