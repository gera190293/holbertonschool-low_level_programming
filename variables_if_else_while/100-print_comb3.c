#include <stdio.h>
/**
 *main - combination
 *
 *Return: zero
 */
int main(void)
{
	int m, n;

	for (m = 49; m <= 57; m++)
	{
		for (n = m; n <= 57; n++)
		{
			putchar(m - 1);
			putchar(n);
			if (m <= 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
