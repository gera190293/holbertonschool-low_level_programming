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
	int i = 0;
	char c;

	while (a[i] && i < n / 2)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1];
		i++;
	}
}
