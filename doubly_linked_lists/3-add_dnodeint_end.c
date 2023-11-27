#include "lists.h"
/**
 *add_dnodeint_end - function that adds a new node at the end of a dlistint_t list
 *@head: head node
 *@n: content of the node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nl, *ol;

	nl = malloc(sizeof(dlistint_t));
	if (nl == NULL)
		return (NULL);
	nl->n = n;
	nl->next = NULL;
	if (*head == NULL)
	{
		nl->prev = NULL;
		*head = nl;
		return (nl);
	}
	ol = *head;
	while (ol->next != NULL)
		ol = ol->next;
	ol->next = nl;
	nl->prev = ol;
	return (nl);
}
