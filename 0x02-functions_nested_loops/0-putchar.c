#include "main.h"
/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{

char x[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

unsigned int c;

for (c = 0; c < sizeof(x); c++)
{
	_putchar(x[c]);
}



_putchar('\n');
return (0);
}

