#include "main.h"

/**
 * print_line - prints n number of underscores
 * @n: number of characters printed
 */

void print_line(int n)
{
	int m;

	for (m = n; m > 0; m--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
