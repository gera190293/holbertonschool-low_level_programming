#include "main.h"
/**
 *_isalpha - check if c is alphabetic
 *@c: variable
 *Return: zero if not, one otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
