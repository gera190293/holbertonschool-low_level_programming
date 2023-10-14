#include <stdio.h>
/**
 *main - combination of 3
 *Return: zero
 */
int main(void)
{
	int m, n, p;

	for (m = 49; m <= 57; m++)
	{
		for (n = m; n <= 57; n++)
		{
			for (p = n; p <= 57; p++)
			{
				putchar(m - 2);
				putchar(n - 1);
				putchar(p);
				if (m <= 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
