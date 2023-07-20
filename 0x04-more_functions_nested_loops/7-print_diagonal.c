#include "main.h"

/**
 * print_diagonal - prints a diagonal line on terminal
 * @n: number of times diagonal char printed
 */

void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (spaces = 1; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
