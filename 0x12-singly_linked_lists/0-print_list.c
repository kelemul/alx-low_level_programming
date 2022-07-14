#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the linked list elements
 * @h: the node that stores elements
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
