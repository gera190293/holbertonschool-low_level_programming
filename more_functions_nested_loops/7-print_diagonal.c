#include "main.h"
/**
 *print_diagonal - print a diagonal
 *@n: times repeat diagonal
 *
 */
void print_diagonal(int n)
{
	int i, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (l = 2; l <= i; l++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
