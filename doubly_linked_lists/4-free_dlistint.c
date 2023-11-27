#include "lists.h"
/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head:head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nl, *ol;

	nl = head;

	if (nl)
	{
		ol = nl->next;
		free(nl);
		nl = ol;
	}
}
