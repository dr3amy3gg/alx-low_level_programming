#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input
 * Return: last digit of input
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
