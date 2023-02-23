#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal
 * @n: input number of times to print '\'
 * Return: a straight line
 */

void print_diagonal(int n)
{
	int yo, lo;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (yo = 1; yo <= n; yo++)
		{
			for (lo = 1; lo < yo; lo++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
	

