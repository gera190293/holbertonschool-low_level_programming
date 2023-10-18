#include "main.h"
/**
 *puts2 - print the half of a string
 *@str: string
 *
 *
 *
 */
void puts2(char *str)
{
	int i = 0;
	int l;

	while (str[i] != '\0')
		i++;
	l = i / 2
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
}
