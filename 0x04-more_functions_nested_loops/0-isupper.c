#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: input
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 and c <= 90)
	{
		return (1);
	}
	return (0);
}
