#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list_t list
 *
 * @p: the linked list_t list
 *
 * Return: the number of elements in h
 *
 */

size_t list_len(const list_t *p)
{
size_t elements = 0;
while (p)
{
elements++;
p = p->next;
}
return (elements);
}
