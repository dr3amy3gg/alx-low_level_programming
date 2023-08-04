#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args as strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
