#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: full string
 * @accept: segment to be counted
 * Return: number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int match = 0;
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				match++;
				break;
			}
		}
		if (s[b] == '\0')
		{
			return (match);
		}
	}
	return (match);
}
