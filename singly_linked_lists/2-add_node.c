#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: new list
 * @str: content of node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nl = malloc(sizeof(list_t));
	char *nstr;
	size_t n;

	nstr = strdup(str);
	if (nstr == NULL)
	    return (NULL);
	for (n = 0; str[n];)
		n++;
	nl->len = n;
	nl->str = nstr;
	nl->next = *head;
	*head = nl;
	return (nl);
}
