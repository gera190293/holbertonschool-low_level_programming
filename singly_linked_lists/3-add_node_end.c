#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list
 *@head: first node
 *@str: content of new node
 *Return:the address of the new element, or NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *nl;
	char *nstr;

	nl = malloc(sizeof(list_t));
	if (nl == NULL)
		return (NULL);
	nstr = strdup(str);
	for (n = 0; str[n];)
		n++;
	nl->len = n;
	nl->str = nstr;
	nl->next = NULL;
	if (*head == NULL)
		*head = nl;
	else
	{
		list_t *curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = nl;
	}
	return (nl);
}
