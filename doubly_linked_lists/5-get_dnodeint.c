#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth node of a linked list
 *@head: head node
 *@index: index of the node, starting from 0
 *Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;

	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
