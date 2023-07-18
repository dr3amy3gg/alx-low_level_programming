#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int a = 1;
	unsigned int b = a;
	unsigned int c = a + b;
	int index = 1;

	printf("%X", b);

	while (index < 98)
	{
		printf(", %X", c);
		a = b;
		b = c;
		c = a + b;
		index++;
	}
	printf("\n");
	return (0);
}
