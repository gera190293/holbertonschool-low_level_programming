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
	int i = 0;

	if (s[i])
	{
		i++;
		return (_strlen_recursion(s + 1));
	}
	else
		return (0);
}
