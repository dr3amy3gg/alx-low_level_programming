#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: no of elements of array
 * @c: specific char to initialise with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
	{
		return ('\0');
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return ('\0');
	}

	for (n = 0; n < size; n++)
	{
		arr[n] = c;
	}

	return (arr);
}
