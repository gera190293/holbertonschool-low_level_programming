#include "lists.h"
/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head:head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nl, *tmp;

	tmp = head;

	if (tmp)
	{
		nl = tmp->next;
		free(tmp);
		tmp = nl;
	}
}
