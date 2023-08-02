#include "main.h"

/**
 * det_root - find sq root of num starting at 0
 * @n: num
 * @r: root number
 * Return: natural square root or -1
 */

int det_root(int n, int r)
{
	if (r * r > n)
	{
		return (-1);
	}

	if (r * r == n)
	{
		return (r);
	}

	return (det_root(n, r +1));
}

/**
 * _sqrt_recursion - calculate squre root of given number
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (det_root(n, 0));
}
