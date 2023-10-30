#include "main.h"
#include <limits.h>
/**
 *_atoi - convert char into int
 *@s: string
 *Return: string in int
 */
int _atoi(char *s)
{
	int re = 0;
	int si = 1;

	while (*s)
	{
		if (*s == '-')
		{
			si = -1;
		}
		else if (*s == '+')
		{
			si = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			re = re * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (re * si);
}
