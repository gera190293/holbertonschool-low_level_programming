#include "main.h"
/**
 *puts_half - print the half of a string
 *@str: string
 *
 *
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int l;

	while (str[i] != '\0')
		i++;
	l = i / 2;
	l = l - 1;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar(10);
}
