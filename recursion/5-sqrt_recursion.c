#include "main.h"
/**
 *Mul - check the result 
 *@n: variable from main
 *Return: result
 *
 */
int Mul(int *n)
{
	int m = 2;

	if (m * m != n)
		return (Mul(m + 1);
	if (m * m == n)
		return (m);
	return (-1);
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number
 *Return: result
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (Mul(n));
}
