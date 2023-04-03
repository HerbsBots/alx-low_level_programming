#include "main.h"

/**
 * _memset - filling the memory with a constant byte
 * @s: pointer to the constant
 * @b: character/constant
 * @n: maximum byte to be assigned to the value
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
/*returning a pointer*/
return (s);
}
