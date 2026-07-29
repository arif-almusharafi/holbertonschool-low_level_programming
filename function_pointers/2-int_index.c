#include "function_pointers.h"
#include <stdlib.h>


int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    if (array != NULL && cmp != NULL)
    {
        for (i = 0; i < size; i++)
        {
            if (array[i] == (*cmp))
                return cmp(array[i]);
        }

    }
    else
    return -1;
}
