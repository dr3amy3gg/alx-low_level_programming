#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings
 * @src: string two
 * @dest: string one
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
