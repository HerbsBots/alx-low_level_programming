#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{

		putchar(a);
	}
	putchar('\n');

	return (0);

}
