#include "main.h"
/**
 *times_table - print times table
 *
 *
 *
 */
void times_table(void)
{
	int m, n;

	m = 0;
	while (m <= 9)
	{
		_putchar('0');
		for (n = 1; n <= 9)
		{
			_putchar(',');
			_putchar(' ');
			if ((m * n) / 10 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((m * n) / 10 + '0');
			}
			_putchar((m * n) % 10 + '0');
		}
		m++;
	}
}
