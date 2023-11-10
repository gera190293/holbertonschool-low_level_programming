#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - function that searches for an integer
 *@array: the array
 *@size: the size of the array
 *@cmp: function that compares
 *Return: number of coincidences
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (;i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
