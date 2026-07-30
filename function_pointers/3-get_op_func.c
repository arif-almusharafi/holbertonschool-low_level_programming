#include <stdlib.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
    };
    int i = 0;
    if (s != ops[i].op)
        return NULL;

    while (s == ops[i].op)
    {
        i++;
        return s[i];
    }

}
