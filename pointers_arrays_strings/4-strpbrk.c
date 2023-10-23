#include "main.h"
/**
 *_strpbrk - that searches a string for any of a set of bytes
 *@s: string
 *@accept: compare string
 *Return: beggining of the located substring
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j])
		{
			if (*s == accept[j])
			{
				j++;
			}
			return (s);
		}
	}
	return ('\0');
}
