#include "main.h"
/**
 *print_last_digit - print last digit of an inter
 *@n: variable
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 0);
	return (n % 10);
}
