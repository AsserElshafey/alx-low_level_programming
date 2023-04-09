#include "main.h"
/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
