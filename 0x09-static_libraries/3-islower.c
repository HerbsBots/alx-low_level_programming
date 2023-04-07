#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
int d;
for (d = 'a'; d <= 'z'; d++)
{
if (c == d)
{
return (1);
}
}
return (0);
}
