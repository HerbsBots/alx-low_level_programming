#include "main.h"

int check_palindrome(char *s, int index, int len)
int _strlen_recursion(char *s)

/**
 * is_palindrome: to check if a string is palindrome
 * @s: the string to reverse
 *
 * Return: 1 if it is, and 0 if it is not
 */

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be calculated for
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the cahr recursively for palindrome
 * @s: string for checking
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int len, int i)
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_palindrome(s, i + 1, len - 1));
}
