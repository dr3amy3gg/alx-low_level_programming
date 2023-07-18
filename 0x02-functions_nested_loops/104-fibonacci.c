#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = a;
	unsigned long int c = a + b;
	int index = 1;

	printf("%lu", b);

	while (index < 98)
	{
		printf(", %lu", c);
		a = b;
		b = c;
		c = a + b;
		index++;
	}
	printf("\n");
	return (0);
}
