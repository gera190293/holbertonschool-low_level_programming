#include "main.h"
#include <stdio.h>
/**
 *fizz_buzz - print numbers from 1 to 100, but if is multiple of 3 or 5 print Fizz or Buzz
 *
 *
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf(i);
		}
	}
}
