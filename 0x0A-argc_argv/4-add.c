#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: array of args as strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	char *n;
	unsigned long int ii;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			n = argv[i];

			for (ii = 0; ii < strlen(n); ii++)
			{
				if (n[ii] < 48 || n[ii] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(n);
			n++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
