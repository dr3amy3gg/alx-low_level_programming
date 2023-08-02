#include "main.h"
#include "_strlen.c"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: input string
 */

void _print_rev_recursion(char *s)
{
	if (*s = s[0])
	{
		_putchar('\n');
		return;
	}
	
	int i = _strlen(*s);

	_putchar(i - 1);
	i--;
	_puts_rev_recursion(s);
}
