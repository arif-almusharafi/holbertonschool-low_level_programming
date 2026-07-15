#include <stdio.h>

int main(void)
{
    int operator;
    int a,b;

    printf("Simple Calculator\n");


    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
    scanf("%d", &operator);
    if (operator == 0)
    {
        printf("Bye!\n");
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}
