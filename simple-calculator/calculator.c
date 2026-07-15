#include <stdio.h>

int main(void)
{
    int operator;

    printf("Simple Calculator\n");

    while (operator != 0)
    {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
        scanf("%d", &operator);
        if (operator == 0)
        {
            printf("Bye!\n");
        }
        else if (operator == 1)
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a + b);
        }
        else if (operator == 2)
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a - b);
        }
        else if (operator == 3)
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a * b);
        }
        else if (operator == 4)
        {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if (b != 0)
            {
                printf("Result: %.2f\n", (float)a / b);
            }
            else
            {
                printf("Error: Division by zero\n");
            }
        }
        else
        {
            printf("Invalid operator\n");
        }
    }
    return 0;
}
