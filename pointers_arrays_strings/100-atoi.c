#include "main.h"
#include <limits.h>
/**
 *_atoi - convert char into int
 *@s: string
 *Return: string in int
 */
int _atoi(char *s)
{
	int r = 0;
	int si = 1;

	while (*s == ' ')
		s++;
	if (*s == '-')
	{
		si = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';
		
		if (r > (INT_MAX - digit) / 10)
		{
			return si == 1 ? INT_MAX : INT_MIN;
		}
		r = r * 10 + digit;
		s++;
	}
	return si * r;
}
