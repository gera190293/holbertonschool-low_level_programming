#include "main.h"
#include <limits.h>
/**
 *_atoi - convert char into int
 *@s: string
 *Return: string in int
 */
int _atoi(char *s)
{
	int i = 0;
	int r = 0;
	int si = 1;

	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		si = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int di = s[i] - '0';

		if (r > (INT_MAX - di) / 10)
		{
			return si == 1 ? INT_MAX : INT_MIN;
		}
		r = r * 10 + di;
		i++;
	}
	return (si * r);
}
