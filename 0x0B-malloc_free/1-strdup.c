#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates string duplicate at new mem alloc
 * @str: string to duplicate
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return ('\0');

	int i = 1;

	while (str[i])
	{
		i++;
	}

	dup = malloc((sizeof(char) * i) + 1);

	if (dup == NULL)
		return ('\0');

	int j = 0;

	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';

	return (dup);
}
