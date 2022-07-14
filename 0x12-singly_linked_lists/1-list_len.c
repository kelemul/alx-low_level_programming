#include "lists.h"

/**
 * list_len - prints the size of linked list
 * @h: The node in a linked listt.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
