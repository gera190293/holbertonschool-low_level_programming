#include "lists.h"
/**
 *add_dnodeint - function that adds a new node at the beginning of a list
 *@head: head node
 *@n: content of the node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int m;
	dlistint_t *nl;

	nl = malloc(sizeof(dlistint_t));
	if (nl == NULL)
		return (NULL);
	m = n;
	nl->n = m;
	nl->next = *head;
	*head = nl;
	return (nl);
}
