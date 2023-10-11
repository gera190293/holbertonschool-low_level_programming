#include <stdio.h>
/**
 *main - number combinations
 *
 *Return: zero
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		if (m == 57)
		{
			break;
			putchar('\n');
		}
		putchar(44);
		putchar(32);
	}
	return (0);
}
