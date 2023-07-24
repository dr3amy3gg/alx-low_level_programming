#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies second string into first string
 * @dest: first string parameter
 * @src: second string parameter
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
