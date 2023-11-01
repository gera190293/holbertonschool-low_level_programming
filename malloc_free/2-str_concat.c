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

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s3 = strcat(s1, s2);
	s3 = malloc(sizeof(*s3) * (strlen(s3) + 1));
	if (s3 == NULL)
		return (NULL);
	return (strcat(s1,s2);
}
