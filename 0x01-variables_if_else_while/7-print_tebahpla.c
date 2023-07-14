#include <stdio.h>

/**
 * main - reverse alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
