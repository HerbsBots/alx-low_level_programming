#include "lists.h"

/**
 * free_list - a free list
 *
 * @head: head of the linked list
 *
 * Return: it has no return
 */

void free_list(list_t *head)
{
list_t *current;
while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
