#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: bits
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;

	while (diff != 0)
	{
		diff = diff & (diff - 1);
		count++;
	}
	return (count);
}
