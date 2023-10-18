#include "main.h"
/**
 *swap_int - swap the values of 2 int
 *@a: variable 1
 *@b: variable 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*b = c;
}
