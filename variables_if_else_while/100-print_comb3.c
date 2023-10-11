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
		for (n = 48; n <= 57; n++)
		{
			putchar(m);
			putchar(n);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\0');
	return (0);
}
