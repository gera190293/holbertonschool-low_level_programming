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
	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				j++;
			}
			return (s);
		}
		i++;
	}
	return ('\0');
}
