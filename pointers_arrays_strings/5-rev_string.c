#include "main.h"
/**
 *rev_string - rev the string
 *@s:string
 *
 */
void rev_string(char *s)
{
	int i, l;
	char c;

	i = 0;
	while (s[i] != '\0')
		i++;
	l = 0;
	while (s[l] != '\0')
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		i--;
		l++;
	}
}

