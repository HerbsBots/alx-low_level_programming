#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -Returns a pointer to a 2-dimensional array of integers
 * @width: the width of the 2-dimensional array
 * @height: the height of the 2-dimensional array
 * Return: if width <= 0, height <= 0, or the function fails - NULL
 * Otherwise - a pointer to the 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
int **array, i, j;
int len = width * height;
if (len <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (i--; i >= 0; i--)
free(array[i]);
free(array);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
array[i][j] = 0;
return (array);
}
