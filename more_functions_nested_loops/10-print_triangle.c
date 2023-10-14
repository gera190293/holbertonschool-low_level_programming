#include "main.h"
/**
 *print_triangle
 *@size; variable
 *
 */
void print_triangle(int size)
{
	int i, l;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = size - 1; i < 0; i--)
		{
			_putchar(' ');
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
