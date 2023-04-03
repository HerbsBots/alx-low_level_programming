#include "main.h"

/**
 * _memset - filling the memory with a constant byte
 * @s: pointer to the constant
 * @b: consatnt/character
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
usigned int i;

/*looping through the pointer*/
for (i = 0; n > 0; i++, n--)
{
/*setting the byte*/
s[i] = b;
}
/* returning the pointer*/
return (s);
}
