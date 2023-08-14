#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);

	while (j < i)
	{
		ptr[j] = 0;
		j++;
	}

	return (ptr);
}
