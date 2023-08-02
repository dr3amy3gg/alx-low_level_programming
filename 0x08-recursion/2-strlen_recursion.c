#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: input string
 * Return: length of string as int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s);
		s++;
	}

	return (i);
}
