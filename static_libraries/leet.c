#include "main.h"
/**
 *leet - encode intro 1337
 *@s: string
 *Return: new string
 */
char *leet(char *s)
{
	int i = 0, j;
	char s2[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == s2[j] || s[i] - 32 == s2[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
