#include "main.h"
/**
 *_strlen_recursion - strlen with recursion
 *@s: string
 *Return: lenght
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1));

	return (0);
}
