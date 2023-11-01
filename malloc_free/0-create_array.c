#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes it with a specific char.
 *@size: size of the array
 *@c: array
 *Return: pointer to the array or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0 || size == NULL)
		return (NULL);
	c = malloc(sizeof(c) * size);
	return (*c);
}
