#include "main.h"

/**
 * cap_string - capitalises each word
 * @a: input string
 * Return: processed string
 */

char *cap_string(char *a)
{
	int i = 0;

	if (a[i] > 96 && a[i] < 123)
	{
		a[i] -= 32;
	}
	i++;

	while (a[i])
	{
		if ((a[i] == ' ' || a[i] == '\t' || a[i] == '\n' ||
			a[i] == '.' || a[i] == ',' || a[i] == ';' ||
			a[i] == '!' || a[i] == '?' || a[i] == '"' ||
			a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
				&& (a[i + 1] > 96 && a[i + 1] < 123))
		{
			a[i + 1] -= 32;
		}
		i++;
	}
	return (a);
}
