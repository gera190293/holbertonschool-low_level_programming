#include "main.h"
#include "2-get_bit.c"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: variable number
 *@index: is the index, starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
