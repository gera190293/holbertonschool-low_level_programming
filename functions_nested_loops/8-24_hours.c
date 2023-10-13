#include "main.h"
/**
 *jack_bauer - print the clock
 *
 *
 *
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	m = 0;
	while (h < 23)
	{
		for (m = 0; m < 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
		h++;
	}
}
