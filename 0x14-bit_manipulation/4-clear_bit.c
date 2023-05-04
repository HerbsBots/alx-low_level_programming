#include "mainh"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 *
 * @n: pointer of an unsigned long int
 *
 * @index: index of the bit
 *
 * Return: 1 if it is successful, and -1 if it is unsuccessful
 *
 */

int clear_bit(unsigned long int *n, unisgned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
