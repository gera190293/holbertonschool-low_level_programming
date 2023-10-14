#include "main.h"
/**
 *more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int m = 0;

	while (m < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				n = n - 10
			}
			_putchar (n + '0');
		}
		_putchar ('\n');
		m++;
	}
}
