#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *p;

	va_start(x, n);


	for (i = 0; i < n; i++)
	{
		p = va_arg(x, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(x);
}
