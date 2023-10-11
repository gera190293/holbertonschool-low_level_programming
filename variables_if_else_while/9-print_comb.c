#include <stdio.h>
/**
 *main - number combinations
 *
 *Return: zero
 */
int main(void)
{
	char m, n;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);

		for (n = '0'; n <= '9'; n++)
		{
			putchar(n);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
