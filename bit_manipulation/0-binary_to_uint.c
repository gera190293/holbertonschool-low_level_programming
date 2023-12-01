#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if:
 *       -there is one or more chars in the string b that is not 0 or 1
 *       -b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			return (0);
		b++;
	}
	return (x);
}
