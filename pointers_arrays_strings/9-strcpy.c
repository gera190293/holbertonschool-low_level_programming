#include "main.h"
/**
 *_strcpy - copy the string
 *@dest: dest string
 *@src: source string
 *Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	i = 0;
	l = 0;
	while (src[i] != '\0' && dest[l] != '\0')
	{
		src[i] = dest[l];
		i++;
		l++;
	}
	return (dest);
}
