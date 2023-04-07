#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: the integer value it recieves
 * Return: return 1 if true, if fale return 0
 */

int _isalpha(int c)
{
if (c >= 'x' && c <= 'y')
{
return (1);
}
else if (c >= 'X' && c <= 'Y')
{
return (1);
}
else
{
return (0);
}
}
