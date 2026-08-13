#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    const int n;
	struct list_s *next;
    struct list_s *prev;
} list_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);
#endif /* LISTS_H */
