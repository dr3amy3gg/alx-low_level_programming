#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string two
 * @dest: string one
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
}
