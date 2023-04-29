#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * pmain - it prints a sentence before the main function
 */

void pmain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
