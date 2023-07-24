#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of string of characters
 * @str: input string
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		i = (len / 2) + 1;
	}
	else
	{
		i = len / 2;
	}

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
