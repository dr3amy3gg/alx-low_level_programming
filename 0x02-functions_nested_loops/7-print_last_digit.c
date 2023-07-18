#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input
 * Return: last digit of input
 */

int print_last_digit(int n)
{
	int l;


	l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}

	_putchar('0' + l);
	return (l);
}
