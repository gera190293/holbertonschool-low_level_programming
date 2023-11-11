#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - calculator function
 *@argc: arguments
 *@argv: pointers to arguments
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int a1, a2, n;
	int (*r)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	r = get_op_func(get_op);
	n = r(a1, a2);

	printf("%d\n", n);
	return (0);
}
