#include "main.h"


void _print_rev_recursion(char *s)
{
    int len = 0;

    if (s[len] != '\0')
    {
        _print_rev_recursion(len + 1);
    }
    _print_rev_recursion(len - 1);

    if (len >= 0)
    {
        _putchar(s[len]);
        _print_rev_recursion(len - 1);
    }
    _putchar('\n');

}
