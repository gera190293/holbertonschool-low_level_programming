#include <stdio.h>
#include <stdlib.h>

/**
 *main - add numbers
 *@argc: count the arguments
 *@argv: pointer to arguments
 *
 *Return: zero if args are valid, -1 and print error if not
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '0')
			{
				printf("Error\n");
				return (-1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
