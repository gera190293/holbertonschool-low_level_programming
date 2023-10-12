#include "main.h"
/**
 *print_last_digit - print last digit of an inter
 *@n: variable
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	_putchar(m);
	return (n % 10);
}
