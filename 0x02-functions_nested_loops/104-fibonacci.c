#include <stdio.h>

/**
 * main - prints out first 98
 * Return: always 0
 */

int main(void)
{
int k;
unsigned long n1 = 0, n2 = 1, n3;
unsigned long n1_h1, n1_h2, n2_h1, n2_h2;
unsigned long h1, h2;

for (k = 0; k < 92; k++)
{
n3 = n1 + n2;
printf("%lu, ", n3);
n1 = n2;
n2 = n3;
}
n1_h1 = n1 / 10000000000;
n2_h1 = n2 / 10000000000;
n1_h2 = n1 % 10000000000;
n2_h2 = n2 % 10000000000;
for (k = 93; k < 99; k++)
{
h1 = n1_h1 + n2_h1;
h2 = n1_h2 + n2_h2;

if ((n1_h2 + n2_h2) > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);

if (k != 98)
printf(", ");
n1_h1 = n2_h1;
n1_h2 = n2_h2;
n2_h1 = h1;
n2_h2 = h2;
}
printf("\n");
return (0);
}
