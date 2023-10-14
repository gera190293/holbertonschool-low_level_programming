#include <stdio.h>
/**
 *main - combination of two digit numbers
 *
 *Return: zero
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 99; m++)
	{
		for (n = m; n < 99; n++)
		{
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar(' ');
			putchar((n + 1) / 10 + '0');
			putchar((n + 1) % 10 + '0');
			if (m <= 97)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
