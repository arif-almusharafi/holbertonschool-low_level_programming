#include "main.h"

void swap_int(int *a, int *b)
{
    int *a = &b;
    int *b = &a;
}
