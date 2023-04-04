#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list.
 * @head: pointer to the head of the listint_t list.
 * @n: integer to be contained in the new node
 * Return: pointer to the new node , else NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
