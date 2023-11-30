#include "lists.h"
/**
<<<<<<< HEAD
 *
 *
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

=======
 * insert_dnodeint_at_index - function that inserts
 * a newnode node at a given position
 * @h: head node
 * @idx: index to delete
 * @n: data to insert in newnode node
 * Return: the address of the newnode node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *newnode;
	unsigned int i = 1;

	node = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = newnode;
			return (newnode);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (node->next != NULL && i != idx)
	{
		node = node->next;
		i++;
	}
	if (i == idx)
	{
		newnode->prev = node;
		newnode->next = node->next;
		if (node->next != NULL)
			node->next->prev = newnode;
		node->next = newnode;
		return (newnode);
	}
	return (NULL);
}
>>>>>>> f965500a56ec478553e2dc7e8446af9de1caae54
