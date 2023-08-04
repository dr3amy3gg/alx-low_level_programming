#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: array of args as strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	printf("%d", sum);
	return (0);
}
