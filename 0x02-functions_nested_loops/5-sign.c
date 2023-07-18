#include "main.h"

/**
 * print_sign - determine positive or negative
 * @n: input
 * Return: 1 if +ve, 0, or -1 if -ve
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
