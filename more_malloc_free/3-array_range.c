#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers
 *@min: minimum
 *@max: maximum
 *Return: pointer to new array, null if min > max or if malloc fail
 */
int *array_range(int min, int max)
{
	int *ar, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(sizeof(int) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = min++;
	return (ar);
}
