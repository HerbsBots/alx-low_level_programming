#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char k;

	int d = 0;

	while (d <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);

		}

		_putchar('\n');

		d++;

		}
}
