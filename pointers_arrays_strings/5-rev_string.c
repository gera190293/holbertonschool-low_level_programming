#include "main.h"
/**
 *rev_string - rev the string
 *@s:string
 *
 */
void rev_string(char *s)
{
	int i, l;

	i = 0;
	while (s[i] != '\0')
		i++;
	l = 0;
	while (s[l] != '\0')
	{
		s[i] = s[l];
		i--;
		l++;
	}
}

