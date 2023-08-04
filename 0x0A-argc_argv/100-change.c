#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to make change
 * @argc: num of args
 * @argv: array of args as strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
	}

	x = atoi(argv[1]);

	coins += x / 25;
	x = x % 25;

	coins += x / 10;
	x = x % 10;

	coins += x / 5;
	x = x % 5;

	coins += x / 2;
	x = x % 2;

	coins += x / 1;
	x = x % 1;

	printf("%d\n", coins);
	return (0);
}
