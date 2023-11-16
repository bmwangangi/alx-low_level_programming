#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the list_t list to be freed.
 *
 * This function frees the memory allocated for each node in a linked list,
 * including the strings stored in each node.
 */
void free_list(list_t *head)
{
	/* Declare a temporary pointer */
	list_t *temporary;

	/* Iterate through the linked list */
	while (head != NULL)
	{
		/* Store the next node in a temporary pointer */
		temporary = head->next;

		/* Free the string in the current node */
		if (head->str != NULL)
			free(head->str);

		/* Free the current node */
		free(head);

		/* Move to the next node */
		head = temporary;
	}
}

