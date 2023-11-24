#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_list - function that prints all the elements of a list_t list
 *@h: single list
 *Return: number of nodes
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			count++;
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
