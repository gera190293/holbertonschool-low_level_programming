#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: variables
 *Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, const unsigned int);
	va_end(vl);
	return (sum);
}
