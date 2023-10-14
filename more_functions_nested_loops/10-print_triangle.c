#include "main.h"
/**
 *print_triangle
 *@size; variable
 *
 */
void print_triangle(int size)
{
	int l, i, j, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (l = 1; l <= size; l++)
			{
				for (j = 1; j <= l; j++)
				{
					_putchar(' ');
				}
				for (k = l + 1; k <= size; k++)
				{
					_putchar(35);
				}
			}
		_putchar(10);
		}
	}
}
