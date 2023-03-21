#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */

void times_table(void)
{

int num, xply, result;

for (num = 0; num <= 9; num++)
{

_putchar('0');

for (xply = 1; xply <= 9; xply++)
{

_putchar(',');
_putchar(' ');

result = num * xply;

if (result <= 9)
_putchar(' ');

else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
