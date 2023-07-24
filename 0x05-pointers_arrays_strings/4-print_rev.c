#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reveresed
 */

void print_rev(char *s)
{
	for (*s = s[-1]; *s = s[0]; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
