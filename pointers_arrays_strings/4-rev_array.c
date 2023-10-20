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

	while (a[i])
		i++;
	while (a[i] && j < n)
	{
		a[j] = a[i];
		i--;
		j++;
	}
}
