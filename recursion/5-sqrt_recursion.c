#include "main.h"


int helper(int n, int current)
{
    if (current * current < n)
    {
        return(helper(current + 1));
    }
    else if (current * current > n)
    {
        return -1;
    }
    else if (current * current == n)
    {
        return current;
    }

}


int _sqrt_recursion(int n)
{
    int current = 0;
    if (current * current != n)
    {
        return -1;
    }
    else if (current * current == n)
    {
        return 0;
    }

    else if (n == 0)
    {
        return 1;
    }

    return (_sqrt_recursion(current));
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
