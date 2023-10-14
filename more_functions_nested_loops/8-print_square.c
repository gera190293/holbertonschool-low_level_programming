#include "main.h"
/**
 *print_square - print a square
 *@size: size of the square
 *
 */
void print_square(int size)
{
	int i, l;

	if (size <= 0)
		_putchar(10);
	else
		for (i = 0; i <= size; i++)
			for (l = 0; l <= size; l++)
				_putchar(35);
		_putchar(10);
}
