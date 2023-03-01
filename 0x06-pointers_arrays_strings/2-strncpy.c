#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
 // return if dest and src is NULL
    if ((dest == NULL) &&(src == NULL))
        return NULL;
    // take a pointer pointing to the beginning of dest string
    char* start = dest;
    // copy first n characters of C-string pointed by src
    // into the array pointed by dest
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    // null terminate dest string
	*dest = '\0';
	return start;
}
