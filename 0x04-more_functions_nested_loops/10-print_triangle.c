#include "main.h"

/**
 * print_triangle - prints triangle of given size
 * @size: number of lines in triangle
 */

void print_triangle(int size)
{
	int row;
	int column;
	int tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}

			for (tri = 1; tri <= row; tri++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
