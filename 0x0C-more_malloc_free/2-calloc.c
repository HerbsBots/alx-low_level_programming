#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a certain number of eements
 * @nmemb: the number of elements
 * @size: the byte size of each array element
 * Return: if nmemb = 0, size = 0, or the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;
if (nmemb == 0 || size == 0)
return (NULL)
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}
