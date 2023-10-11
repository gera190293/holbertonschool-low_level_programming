#include <stdlib.h>
#include <time.h>

/**
 *main - n positive, negative or zero
 *
 *Return: zero
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("n is positive\n");
	}
	if (n = 0)
	{
		printf("n is zero\n");
	}
	else
	printf("n is negative\n");

	return (0);
}
