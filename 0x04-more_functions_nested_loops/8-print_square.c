#include "main.h"

/**
 * print_square - prints a square on terminal using #
 * @size: determines size of square sides
 */

void print_square(int size)
{
	int horiz;
	int vert;

	if (size < 0)
	{
		_putchar('\n')
	}
	else
	{
		for (vert = 0; vert < size; vert++)
		{
			for (horiz = 0; horiz < size; horiz++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
