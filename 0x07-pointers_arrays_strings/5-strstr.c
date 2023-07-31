#include "main.h"

/**
 * _strstr - locates substring
 * @needle: substring to locate
 * @haystack: string to search through
 * Return: pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, k;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++;
					j++;
				}
				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0');
}
