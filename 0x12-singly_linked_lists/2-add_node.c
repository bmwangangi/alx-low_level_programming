#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The new string to add to the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Declare and initialize a new node */
	list_t *new = malloc(sizeof(list_t));

	if (!new)

		return (NULL);

	/* Initialize variable to store the length of the string */
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Copy the string to the new node */
	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	/* Assign values to the new node */
	new->len = len;
	new->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new;

	/* Return the address of the new element */
	return (*head);
}

