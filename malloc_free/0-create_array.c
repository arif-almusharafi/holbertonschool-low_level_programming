#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return NULL;
    }

    char *array = malloc(size * sizeof(char));

    if (array == 0)
    {
        return NULL;
    }

    for(int i = 0; i < size; i++)
    {
        array[i] = c;
    }

}
