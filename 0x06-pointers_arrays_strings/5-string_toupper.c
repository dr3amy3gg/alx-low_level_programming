#include "main.h"

/**
 * string_toupper - converts chars in string to uppercase
 * @a: string to convert
 * Return: converted string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] > 96 && and a[i] < 123)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
