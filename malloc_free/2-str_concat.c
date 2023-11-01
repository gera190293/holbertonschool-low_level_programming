#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: string
 *@s2: string
 *Return: concatenates string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	s3 = malloc(sizeof(*s3) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);
	strcat(s1, s2);
	strcpy(s3, s1);
	return (s3);
}
