#include "main.h"
/**
 *factorial - factorial function
 *@n: variable
 *Return: -1 if n < 0, 1 if n = 0 and -1
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if else (n == 0)
		return (1);
	else
		return (n * factorial(n + 1));
}
