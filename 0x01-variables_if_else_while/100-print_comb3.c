#include <stdio.h>

/**
 * main - double digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = (first + 1); second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (first != '8' || second != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
