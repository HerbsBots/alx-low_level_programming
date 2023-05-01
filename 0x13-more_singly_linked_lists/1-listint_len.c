#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 *
 * @p: a pointer to the head fof the listint_t list
 *
 * Return: the number of elements in the listint_t list
 *
 */

size_t listint_len(const listint_t *p)
{
size_t num = 0;
while (p)
{
num++;
p = p->next;
}
return (num);
}
