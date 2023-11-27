#include "lists.h"
/**
 *free_list - function thath frees a list
 *@head: head node
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		*head = *head->next;
	}
}
