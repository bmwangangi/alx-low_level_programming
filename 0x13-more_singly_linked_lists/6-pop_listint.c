#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A double pointer to the listint_t list.
 *
 * Return: The data  or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int data;

	/* Check if the head is NULL or if the list is empty */
	if (!head || !*head)
		return (0);

	/* Save the data of the head node */
	data = (*head)->n;

	/* Update the head to point to the next node and free the old head */
	temporary = (*head)->next;
	free(*head);
	*head = temporary;
	return (data);
}

