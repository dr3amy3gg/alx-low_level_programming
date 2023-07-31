#include "main.h"

/**
 * _strlen - return length of string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * _strchr - locates a char in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= _strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
}
