#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 * @head: A double pointer to the listint_t list.
 * @n: The data to insert in the new element.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temporary = *head;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node with the provided data */
	new_node->n = n;
	new_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	while (temporary->next)
		temporary = temporary->next;

	/* Add the new node at the end */
	temporary->next = new_node;

	return (new_node);
}

