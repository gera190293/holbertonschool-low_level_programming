#include "search_algos.h"

/**
 * print - alt function to print
 * @array: array
 * @l: left index
 * @r: right index
 */
void print(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: array of ints
 * @size: size of the array
 * @value: value to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print(array, l, r);
		middle = (l + r) / 2;
		if (array[middle] == value)
			return (middle);

		else if (array[middle] > value)
			r = middle - 1;

		else
			l = middle + 1;
	}
	return (-1);
}
