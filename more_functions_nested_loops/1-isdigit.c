#include "main.h"
/**
 *_isdigit - check if is a digit
 *@c: variable
 *Return: 1 if is, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
