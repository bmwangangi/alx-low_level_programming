#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node
 * @head: A double pointer to the first element in the listint_t list.
 * @index: The index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* Delete the node at the beginning (index 0) */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	/* Traverse the list to the node before the one to be deleted */
	while (i < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		i++;
	}

	/* Delete the node at the specified index */
	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}

