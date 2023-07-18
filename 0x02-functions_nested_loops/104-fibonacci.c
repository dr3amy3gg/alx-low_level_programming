#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = a;
	long int c = a + b;
	int index = 1;

	printf("%ld", b);

	while (index < 98)
	{
		printf(", %ld", c);
		a = b;
		b = c;
		c = a + b;
		index++;
	}
	printf("\n");
	return (0);
}
