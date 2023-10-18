#include "main.h"
/**
 *_strcpy - copy the string
 *@dest: dest string
 *@src: source string
 *Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
