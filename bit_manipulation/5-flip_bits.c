#include "main.h"
/**
 *flip_bits - function that returns the number of bits you
 *would need to flip to get from one number to another.
 *@n: first variable
 *@m: second variable
 *Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
