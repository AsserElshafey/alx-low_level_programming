#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; str[end] != '\0'; end++)
	{
	}

	array = malloc(end + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	return (array);
}
