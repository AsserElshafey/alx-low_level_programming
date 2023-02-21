#include "main.h"

/**
 *
 * _islower - cheks if the letter is in lower case
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
