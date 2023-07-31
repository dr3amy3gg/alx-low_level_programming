#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @n: number of bytes to occupy in memory
 * @b: constant value occupying memory
 * Return: point to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
