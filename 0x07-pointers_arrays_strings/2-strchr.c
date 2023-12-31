#include "main.h"


/**
 * _strchr - locates a char in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
}
