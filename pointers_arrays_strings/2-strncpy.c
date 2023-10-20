#include "main.h"
/**
 *_strncpy - copy a string into other
 *@dest: destiny string
 *@src: source string
 *@n:size
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
