#include "main.h"
#include <stdio.h>
/**
 *main - main function
 *Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0 && i != 100)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return (0);
}
