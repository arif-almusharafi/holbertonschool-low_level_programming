#include "function_pointers.h"
#include <stdlib.h>


void array_iterator(int *array, size_t size, void (*action)(int))
{
    action(array);
}
