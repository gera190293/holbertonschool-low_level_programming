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
	int h = 1;

	while (s[i] && h == 1)
	{
		h = 0;
		while (accept[j])
		{
			if (accept[j] != s[i])
				j++;
			else
			{
				h = 1;
				c++;
				break;
			}
		}
		j = 0;
		i++;
	}
	return (c);
}
