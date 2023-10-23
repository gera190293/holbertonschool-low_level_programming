#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: string
 *@accept: character
 *Return: lenght
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (accept[j] != s[i])
				j++;
			else
			{
				c++;
				break;
			}
		}
		j = 0;
		i++;
	}
	return (c);
}
