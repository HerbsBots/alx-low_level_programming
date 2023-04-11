#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: the side of the array to be initialized
 * @c: the character to initialize
 * Return: a pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
