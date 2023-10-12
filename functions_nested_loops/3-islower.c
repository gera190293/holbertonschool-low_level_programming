#include "main.h"
/**
 *_islower - function that return 1 if c is lowercase
 *@c: letter
 *Return: 1 if yes, zero if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
