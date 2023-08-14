#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: lowest value input
 * @max: highest value input
 * Return: pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
