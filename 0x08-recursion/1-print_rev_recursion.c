#include "main.h"

/**
 * _prints_rev_recursion - prints s tring in reverse
 * @s: the string that is to be printed
 */

/** takes in character as the argument */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

