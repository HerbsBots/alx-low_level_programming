#include "function_pointers.h"

/**
 * array_iterator - print each array
 * @array: array
 * @size: is the sizze of the array
 * @action: a pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
