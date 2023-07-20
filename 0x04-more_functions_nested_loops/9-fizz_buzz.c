#include <stdio.h>

/**
 * main - entry point
 * replace multiples of 3 with Fizz
 * replace multiples of 5 with Buzz
 * replace multiples of 3 and 5 with FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
