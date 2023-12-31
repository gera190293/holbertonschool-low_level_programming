#include "lists.h"
/**
 *sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 *@head: head node
 *Return: sum of nodes
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
