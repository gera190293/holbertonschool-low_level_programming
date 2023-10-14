#include "main.h"
/**
 *more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		_putchar (n / 10);
		_putchar (n % 10);
		_putchar ('\n');
	}
}
