#include <stdio.h>

/**
 * main - positive or negative determination using if statements
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
