#include "main.h"
/**
 *_strstr - function that locates a substring
 *@haystack: the string
 *@needle: substring
 *Return: pointer to needle or NULL if fail
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int h = 0;

	while (needle[h])
		h++;
	while (*haystack)
	{
		for (; needle[i]; i++)
		{
			if (needle [i] != haystack[i])
				break;
		}
		if (i != h)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
