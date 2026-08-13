#include "lists.h"
#include <stdio.h>


size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        nodes++;
        h = h->next;
    }

    return (nodes);

}
