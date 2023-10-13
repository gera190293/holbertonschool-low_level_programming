#include "main.h"
/**
 *print_last_digit - print last digit of an inter
 *@n: variable
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
