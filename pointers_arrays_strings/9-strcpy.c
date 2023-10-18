#include "main.h"
/**
 *_strcpy - copy the string
 *@dest: dest string
 *@src: source string
 *Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
