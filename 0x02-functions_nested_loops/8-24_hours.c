#include "main.h"

/**
 * jack_bauer - print minutes from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			m++;
		}
		m = 0;
		h++;
	}
}
