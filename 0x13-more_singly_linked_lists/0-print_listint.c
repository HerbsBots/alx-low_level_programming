#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @p: a pointer to the head if the list_t list
 *
 * Return: the number of nodes in the list_t list
 *
 */

size_t print_listint(const listint_t *p)
{
size_t nodes = 0;
while (p)
{
nodes++;
printf("%d\n", p->n);
p = p->next;
}
return (nodes);
}
