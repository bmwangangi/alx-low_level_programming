#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the list_t linked list.
 *
 * This function traverses the linked list and counts the number of nodes.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	/* Initialize the count of elements */
	size_t element_count = 0;

	/* Iterate through the linked list */
	while (h)
	{
		/* Increment the count for each node */
		element_count++;

		/* Move to the next node */
		h = h->next;
	}

	/* Return the total number of elements in the linked list */
	return (element_count);
}

