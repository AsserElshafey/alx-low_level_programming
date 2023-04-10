#include "main.h"
/**
 * get_endianness - tells if the function is big or little endian
 * @void: it's a void
 * Return: always zero
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	*C = (char *) &x;
	return ((int)*c);
}
