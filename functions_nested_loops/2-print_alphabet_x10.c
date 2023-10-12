#include "main.h"
/**
 *print_alphabet_x10 - print ten times the alphabet
 *
 *
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
	}
}
