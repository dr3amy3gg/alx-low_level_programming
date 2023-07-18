#include <stdio.h>

/**
 * main - entry point
 * Description: sum of even valued terms where term value is less
 * than four million
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;
	long int sum = b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", sum);
	return (0);
}
