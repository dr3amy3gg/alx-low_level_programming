#include <stdio.h>

/**
 * main - all base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int alpha = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
