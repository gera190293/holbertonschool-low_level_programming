#include <stdio.h>
/**
 *main - combination of two digit numbers
 *
 *Return: zero
 */
int main(void)
{
	int m;

	for (m = 0; m <= 99; m++)
	{
		putchar(m / 10 + '0');
		putchar(m % 10 + '0');
	}
	return (0);
}
