#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	float a = 1;
	float b = a;
	float c = a + b;
	int index = 1;

	printf("%.0f", b);

	while (index < 98)
	{
		printf(", %.0f", c);
		a = b;
		b = c;
		c = a + b;
		index++;
	}
	printf("\n");
	return (0);
}
