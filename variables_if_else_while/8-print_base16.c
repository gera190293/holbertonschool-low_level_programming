#include <stdio.h>

/**
 *main - hexadecimal digits
 *
 *Return: zero
 */

int main(void)
{
	char n, m;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');
	return (0);
}
