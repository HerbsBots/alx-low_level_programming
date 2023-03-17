#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints the alphabet in lowercase\n
 * Return: 0 if (Success)
 */

int main(void)

{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
