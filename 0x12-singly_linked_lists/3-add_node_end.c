#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The string to put in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Declare and initialize a new node */
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->len = strlen(str);

	/* Copy the string to the new node */
	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	/* Assign values to the new node */
	new->len = len;
	new->next = NULL;
	/* Check if the list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* Traverse the list to find the last node */
	list_t *temp = *head;

	while (temp->next)
		temp = temp->next;

	/* Add the new node at the end */
	temp->next = new;

	return (new);
}

