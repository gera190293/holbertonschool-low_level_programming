#include "main.h"
/**
 *print_triangle - print a triagnle
 *@size: variable
 *
 */
void print_triangle(int size)
{
	int i, l, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (l = i + 1; l <= size; l++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
