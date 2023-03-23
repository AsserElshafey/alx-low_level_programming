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
	va_list valist;
	unsigned int i = 0;

	va_start(valist, format);
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
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				tmp = va_arg(valist, char *);
				if (tmp == NULL)
				{
					tmp = "(nil)";
				}
				printf("%s", tmp);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
					format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
