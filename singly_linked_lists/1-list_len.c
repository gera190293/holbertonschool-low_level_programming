#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *lists_len - function that returns the number of elements in a linked list_t list.
 *@h: single list
 *Return: number of nodes
 *
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
    {
		count++;
		h = h->next;
	}
	return (count);
}