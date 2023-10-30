#include "main.h"
/**
 *CP - check if n is prime
 *@n: variable int
 *Return: like the main
 *
 */
int CP(int n)
{
	int m = (n / 2);

	if (n % m == 0 && m * 2 == n)
		return (1);
	return (CP(n - 1);
}
/**
 *is_prime_number - confir prime number
 *@n: number
 *Return: 1 if n is prime 0 if not
 *
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (CP(n));
}
