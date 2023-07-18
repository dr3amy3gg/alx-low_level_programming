#include <stdio.h>

/**
 * main - entry point
 * Description: prints first 50 fibonacci sequence numbers
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = a;
	long int c = a + b;
	int index;

	printf("%ld, %ld, ", a, b);

	while (index <= 50)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
