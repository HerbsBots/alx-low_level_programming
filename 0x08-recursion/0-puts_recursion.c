#include "main.h"

/**
 * _puts_recursion - it prints a string following a new line
 * @s: represents the strings to be printed
 * Return: Always 0 on successful
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
