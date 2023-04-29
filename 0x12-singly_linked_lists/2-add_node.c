#include "lists.h"
#include <string.h>

/**
 * add_node - addition of a new node to the list_t list at the beginning
 *
 * @head: a pointer that points to the head of the list_t list
 *
 * @str: the string that gets added to the list_t list
 *
 *
 * Return: NULL on failure and other wise address of a new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
char *dup_str;
int len;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup_str = strdup(str);
if (dup_str == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup_str;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
