# include "main.h"
/**
 *print_line - print a line
 *@c: length
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for(i = 0; i <= n + 1; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
