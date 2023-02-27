#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return (sign * res);
}
