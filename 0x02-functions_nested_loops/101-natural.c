#include <stdio.h>

/**
 * main - prints sum of all the multiples of 3 or 5 below 1024
 * Return: always 0 (success)
 */

int main(void)
{
int k, d = 0;

for (k = 0; k < 1024; k++)
{

if ((k % 3) == 0 || (k % 5) == 0)

d += k;

}
printf("%d\n", d);
return (0);
}
