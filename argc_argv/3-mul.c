#include <stdio.h>

/**
 *main - program that multiplies two numbers
 *@argc: count the arguments
 *@argv: pointer to arguments
 *
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		if (argc < 2 || argc > 2)
		{
			printf("Error");
		}
		else
		{
			printf("%d\n", (argv[0] * argv[1]);
		}
	}
}
