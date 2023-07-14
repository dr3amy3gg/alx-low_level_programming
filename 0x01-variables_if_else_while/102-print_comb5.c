#include <stdio.h>

/**
 * main - double double digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int tens;
	int ones;
	int tens2;
	int ones2;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (tens2 = '0'; tens2 <= '9'; tens2++)
			{
				for (ones2 = (ones + 1); ones2 <= '9'; ones2++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tens2);
					putchar(ones2);

					if ((tens != '9' || ones != '8') && (tens2 != '9' || ones2 != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
