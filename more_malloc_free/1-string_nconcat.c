#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat -  function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: size of s2
 *Return: concatenate strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s3;
	size_t l1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	s3 = malloc(sizeof(*s3) * (l1 + n + 1));
	if (s3 == NULL)
		return (s3);
	l1 = 0;
	for (i = 0; s1[i]; i++)
		s3[l1++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s3[l1++] = s2[i];
	s3[l1] = '\0';
	return (s3);
}
