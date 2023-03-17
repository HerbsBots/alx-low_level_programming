#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers from 00 to 89
 * Return: always 0 (success)
 */

int main(void)
{
int c, i;

for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
if (c < i)
{
putchar(c);

putchar(i);

if (c != '8' || (c == '8' && i != '9'))

{
putchar(',');

putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
