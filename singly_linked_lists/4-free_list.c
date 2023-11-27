#include "lists.h"
/**
 *free_list - function thath frees a list
 *@head: head node
 */
void free_list(list_t *head)
{
	list_t *nl;

	while (head)
	{
		nl = head->next;
		free(head->str);
		free(head);
		head = nl;
	}
}
