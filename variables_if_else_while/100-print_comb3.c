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
		for (n = m + 1; n <= 57; n++)
		{
			putchar(m);
			putchar(n);
			if (m == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
