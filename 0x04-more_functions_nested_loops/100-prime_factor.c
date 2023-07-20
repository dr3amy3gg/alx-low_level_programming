#include <stdio.h>

/**
 * main - entry point
 * print largest prime factor
 * Return: 0 success
 */

int main(void)
{
	long long x = 612852475143;
	long long div = 2;

	while (div < x)
	{
		if (x % div == 0)
		{
			x /= div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%lld\n", x);
	return (0);
}
