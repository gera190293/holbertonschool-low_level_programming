#include <stdio.h>

/**
 *main - Write a program that prints its name, followed by a new line.
 *@argc: number of arguments
 *@argv: pointer to arguments
 *return: zero
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
