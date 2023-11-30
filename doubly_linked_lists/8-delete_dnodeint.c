 #include "lists.h"
 /**
  *delete_dmpdeomt_at_index - function that deletes the node at index
  *of a dlistint_t linked list
  *@head: head node
  *@index: is the index of the node that should be deleted. Index starts at 0
  *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	node = *head;
	while (node->next && i != index)
	{
		i++;
		node = node->next;
	}
	if (i == index)
	{
		if (node->next != NULL)
		{
			node->next->prev = node->prev;
			node->prev->next = node->next;
			free(node);
		}
		else
		{
			node->prev->next = NULL;
			free(node);
		}
		return (1);
	}
	return (-1);
}