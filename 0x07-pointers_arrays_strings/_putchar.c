 /* including the header file (unistd.h) for the function (write) */

	#include <unistd.h>
	/**
	 * _putchar - writing the character c to stdout
	 * @c: The character that prints
	 *
	 * when successful (1) return (1)
	 * if error occurs, (negative of 1, i.e -1) is returned, and the error number is 	   also set apropraitely.
	 */
	int _putchar(char c)
	
	{
		/* calling the "write" function to write the character to stdout */
		return (write(1, &c, 1));

	}
