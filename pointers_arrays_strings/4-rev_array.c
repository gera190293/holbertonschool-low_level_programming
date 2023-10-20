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
	int j = 0;
	char c;

	while (a[i] && j < n)
	{
		i--;
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		j++;
	}
}
