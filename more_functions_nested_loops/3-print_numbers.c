#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
}
