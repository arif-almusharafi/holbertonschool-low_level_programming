#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_t - doubly linked list
 * @n: int - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_t
{
    const int n;
	struct dlistint_t *next;
    struct dlistint_t *prev;
} dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);
#endif /* LISTS_H */
