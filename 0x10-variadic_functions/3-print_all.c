#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - Print the arguments passed.
  * @format: Format of the arguments.
  * Return: void.
  */

void print_all(const char * const format, ...)
{
	va_list x;
	unsigned int i = 0;
	char *c = ", ";

	va_start(x, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		char *tmp;

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(x, int), c);
				break;
			case 'i':
				printf("%i%s", va_arg(x, int), c);
				break;
			case 'f':
				printf("%f%s", va_arg(x, double), c);
				break;
			case 's':
				tmp = va_arg(x, char *);
				if (tmp == NULL)
				{
					tmp = "(nil)";
				}
				printf("%s%s", tmp, c);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
