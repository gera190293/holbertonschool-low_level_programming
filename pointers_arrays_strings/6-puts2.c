#include "main.h"
/**
 *puts2 - printe alternate the string
 *@str: string
 *
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		else
		{
			i++;
		}
	}
	_putchar(10);
}
