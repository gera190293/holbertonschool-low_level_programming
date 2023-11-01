#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that multiplies two numbers
 *@argc: count the arguments
 *@argv: pointer to arguments
 *
 *Return: zero if recibie 2 arg, -1 if not
 */
int main(int argc, char *argv[])
{
	int m, n;

	if (argc != 3)
	{
		printf("Error");
		return (-1);
	}
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", (m * n));
	return (0);
}
