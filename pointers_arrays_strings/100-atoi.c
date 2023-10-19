#include "main.h"
/**
 *_atoi - convert char into int
 *@s: string
 *Return: string in int
 */
int _atoi(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		if (s[i] == '-')
		{
			s[i] = -s[i];
			i++;
		}
		else if (s[i] <= 9 && s[i] >= 0)
		{
			s[i] = s[i];
			i++;
		}
		else
			continue;
	}
	return (s);
}
