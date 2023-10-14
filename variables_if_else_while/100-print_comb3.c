#include <stdio.h>
/**
 *main - combination
 *
 *Return: zero
 */
int main(void)
{
	int m, n;

	for (m = 48; m <= 57; m++)
	{
		for (n = m; n <= 57; n++)
		{
			putchar(m - 1);
			putchar(n);
			if (m <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
