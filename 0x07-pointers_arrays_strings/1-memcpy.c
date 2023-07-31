#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area to copy
 * @dest: destination of copy 
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
