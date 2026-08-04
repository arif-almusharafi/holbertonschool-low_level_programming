#include "main.h"


void _print_rev_recursion(char *s)
{
    int len = 0;

    if (s[len] != '\0')
    {
        len + 1;
    }
    len - 1;

    if (len >= 0)
    {
        _putchar(s[len]);
        len - 1;
    }
    _putchar('\n');

}
