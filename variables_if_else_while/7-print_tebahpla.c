#include <stdio.h>

/**
 *main - alphabetic in reverse
 *
 *Return: zero
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
