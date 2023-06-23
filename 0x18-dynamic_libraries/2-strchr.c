#include <stdio.h>
#include "main.h"
/**
 * _strchr - returns a pointer to the first occurrence of the character c
 * in the string s.
 * @s: string
 * @c: Character
 * Return: pointer to the first occurence of the character or pointer to null
 * value if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
