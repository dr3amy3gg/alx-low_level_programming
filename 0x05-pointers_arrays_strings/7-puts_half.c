#include "main"
#include "2-strlen.c"

/**
 * puts_half - prints second half of string of characters
 * @str: input string
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int half_len = len / 2;

	for (i = half_len; i != '\0'; i++)
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		else
		{
			half_len = (len - 1) / 2;
			_putchar(str);
		}
	}
	_putchar('\n');
}
