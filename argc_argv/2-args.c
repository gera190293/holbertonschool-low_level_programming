#include <stdio.h>

/**
 *main - print every argument
 *@argc: count the arguments
 *@argv: pointer to arguments
 *
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
