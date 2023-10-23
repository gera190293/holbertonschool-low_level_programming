#include "main.h"
/**
 *_strchr - search for a character in the string
 *@s: the string
 *@c: the character
 *Return: pointer to the first occurrence of the character 
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
