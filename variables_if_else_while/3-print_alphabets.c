#include <stdio.h>

/**
 *main - alphaabetic upper and lower
 *
 *Return: zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
