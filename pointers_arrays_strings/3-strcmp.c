#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: variable 1
 *@s2: variable 2
 *Return: 0 equal, 1 if s1 is greater than s2, -1 else
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
