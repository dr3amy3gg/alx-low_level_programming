#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args passed into it
 * @argc: number of args
 * @argv: array of args
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int prog = 1;

	printf("%d\n", (argc - prog));
	return (0);
}
