#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the list_t linked list to print.
 *
 * This function iterates through the linked list and prints
 * information about each node.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	/* Initialize the node count */
	size_t node_count = 0;

	/* Iterate through the linked list */
	while (h)
	{
		/* Check if the string in the current node is NULL */
		if (!h->str)
		{
			/* Print information for NULL string */
			printf("[0] (nil)\n");
		}
		else
		{
			/* Print information for non-NULL string */
			printf("[%u] %s\n", h->len, h->str);
		}

		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		node_count++;
	}

	/* Return the total number of nodes in the linked list */
	return (node_count);
}


