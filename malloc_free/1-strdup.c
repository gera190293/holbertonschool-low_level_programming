#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter
 *@str: string
 *Return: NULL if stris NULL, pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *str2 = malloc(sizeof(*str2) * strlen(str));

	if (str2 == NULL)
		return (NULL);
	strcpy(str2, str);
	free;
	return (str2);
}
