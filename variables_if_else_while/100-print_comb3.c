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
		putchar(m);
		for (n = 48; n <= 57; n++)
		{
			putchar(n);
		}
		putchar(44);
		putchar(32);
	}
	return (0);
}
