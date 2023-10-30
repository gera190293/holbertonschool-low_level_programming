#include "main.h"
/**
 *reverse_array - reverse an array
 *@a: array
 *@n: number of the elements
 *
 *
 */
void reverse_array(int *a, int n)
{
	int c, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		c = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = c;
	}
}
