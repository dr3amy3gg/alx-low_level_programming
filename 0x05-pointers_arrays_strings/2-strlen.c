#include "main.h"

/**
 * _strlen - return length of string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
