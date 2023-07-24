#include "main.h"
#include <stdio.h>

/**
 * print_array - prints specified number of elements in given array
 * @a: array of integers
 * @n: number of elements to prints
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
