#include "main.h"
/**
 *_strncnat - concatenate n bytes of the string
 *@dest: destination
 *@src: source
 *@n: bytes
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (*dest);
}
