#include "main.h"
/**
 *_strlen_recursion - str with recursion
 *@s: string
 *Return: lenght
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1));
	return (0);
}
