#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;


    if (size == NULL)
    {
        return NULL;
    }

    array = malloc(size * sizeof(char));

    if (array == 0)
    {
        return NULL;
    }

    for(i = 0; i < size; i++)
    {
        array[i] = c;
    }

    return create_array;
}
