#include "main.h"


/**
 * _isalpha - checks for alphabet characther
 * @c: the integer value it recieves
 * Return: return 1 if true. return 0 if false
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
