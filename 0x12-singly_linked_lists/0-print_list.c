#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @p: singly linked list
 *
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *p)
{
size_t nelem;
nelem = 0;
while (p != NULL)
{
if (p->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", p->len, p->str);
p = p->next;
nelem++;
}
return (nelem);
}
