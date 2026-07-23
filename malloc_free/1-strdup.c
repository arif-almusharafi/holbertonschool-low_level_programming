#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    char *ptr = str;
    unsigned int len = 0;
    char *copy;
    unsigned int i;

    if (str == NULL)
        return NULL;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    copy = malloc(len + 1);

    if (copy == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
    {
        copy[i] = str[i];
    }
    return  copy;

}
