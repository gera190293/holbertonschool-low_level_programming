#include "main.h"
/**
 *more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int m = 0;
	int j;

	while (m < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			j = n;
			if (j >= 10)
			{
				j = j - 10;
				_putchar(1);
			}
			_putchar(j);
		}
		_putchar ('\n');
		m++;
	}
}
