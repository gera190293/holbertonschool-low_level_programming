#include "main.h"
/**
 *_atoi - convert char into int
 *@s: string
 *Return: string in int
 */
int _atoi(char *s)
{
	int i = 0;
	int r = 0;
	int s = 1;

	if (s[0] == '-')
	{
		s = -1;
		i = 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (s * r);
}
