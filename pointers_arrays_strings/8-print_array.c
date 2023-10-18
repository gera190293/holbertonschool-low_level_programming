#include "main.h"
#include <stdio.h>
/**
 *print_array - print n elements of an array
 *@a: string
 *@n: numbers of elements of the array
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{			
			printf("%d, ", a[i]);
			i++;
		}
		else
		{
			printf("%d", a[i]);
			i++;
		}
	}
}
