#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
char az;
char AZ;

for (az = 'a' ; az <= 'z' ; az++)
{
	putchar(az);
}

for (AZ = 'A' ; AZ <= 'Z' ; AZ++)
{
	putchar(AZ);
}

putchar('\n');
return (0);
}
