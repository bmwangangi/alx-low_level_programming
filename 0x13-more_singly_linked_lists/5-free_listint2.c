#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A double pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	/* Check if the head is NULL */
	if (head == NULL)
		return;

	/* Traverse the linked list, free nodes, and set head to NULL */
	while (*head != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;
}

