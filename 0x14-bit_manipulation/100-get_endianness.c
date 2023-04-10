#include "main.h"
/**
 * get_endianness - tells if the function is big or little endian
 * @void: it's a void
 * Return: always zero
 */
int get_endianness(void)
{
	int e = 1;

	return (*((char *) &e) + '0');
}
