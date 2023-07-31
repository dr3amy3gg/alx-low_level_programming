#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: input string
 * @accept: search parameter
 * Return: pointer to byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return ('\0');
}
