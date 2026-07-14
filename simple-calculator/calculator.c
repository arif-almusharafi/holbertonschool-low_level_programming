#include <stdio.h>

int main(void)
{
    printf("Simple Calculator\n");

    int operator;
    // int a,b;
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
    scanf("%d", &operator);
    if (operator == 1)
    {
        // printf("Enter two numbers:");
        // scanf("%d %d", &a, &b);
        // printf("Result: %d\n", a + b);

    }
    else if (operator == 2)
    {
        // printf("Enter two numbers:");
        // scanf("%d %d", &a, &b);
        // printf("Result: %d\n", a - b);
    }
    else if (operator == 3)
    {
        // printf("Enter two numbers:");
        // scanf("%d %d", &a, &b);
        // printf("Result: %d\n", a * b);
    }
    else if (operator == 4)
    {
        // printf("Enter two numbers:");
        // scanf("%d %d", &a, &b);
        // if (b == 0)
        // {
        //     printf("Error: Division by zero\n");
        // }
        // else
        // {
        //     printf("Result: %d\n", a / b);
        // }
    }
    else if (operator == 0)
    {
        printf("Bye!\n");
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}
