#include "main.h"
/**
 * set_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
