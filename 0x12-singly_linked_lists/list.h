#ifndef LIST_H
#define LIST_H

/*
 * Desc: header file containing prototypes and definitions
 * for all functions and types written in this project
 */

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure for
 * holberton project
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_len *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
