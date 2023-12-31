#include "lists.h"
/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head:head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nl;
	dlistint_t *tmp = head;

	while (tmp)
	{
		nl = tmp->next;
		free(tmp);
		tmp = nl;
	}
}
