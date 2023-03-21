#include <stdio.h>

/**
 * main - print even numbers below 4,000,000
 * Return: always 0
 */

int main(void)
{
int a = 0, b = 1, next = 0;
int sum;

while (next < 4000000)
{
next = a + b;
a = b;
b = next;
if (next % 2 == 0)
sum += next;
}
printf("%i\n", sum);
return (0);
}

