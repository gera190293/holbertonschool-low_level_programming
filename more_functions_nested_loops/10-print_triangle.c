#include "main.h"
/**
 *print_triangle
 *@size; variable
 *
 */
void print_triangle(int size)
{
	int l;
	int i = size - 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i < 0)
		{
			_putchar(' ');
			i--;
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
		}
	}
}
