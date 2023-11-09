#include "dog.h"
#include <stdlib.h>

int sl(char *s);
char *sc(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 *sl - strlen
 *@s: string
 *Return: len
 *
 */
int sl(char *s)
{
	int l = 0;

	while (*s++)
		len++;

	return (l);
}
/**
 *sc - string copy
 *@dest: destiniy
 *@src: source
 *Return: pointer to dest
 */
char *sc(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 *new_dog - create a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	nd = malloc(sizof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(sizeof(char) * (sl(name) + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = malloc(sizeof(char) * (sl(owner) + 1));
	if (nd->owner == NULL)
	{
		free(nd);
		free(nd->name);
		return (NULL);
	}

	nd->name = sc(nd->name, name);
	nd->age = age;
	nd->owner = sc(nd->owner, owner);

	return(nd);
}
