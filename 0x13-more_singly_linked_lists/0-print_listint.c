#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	while (h)
	{
		printf("%d\n", h->n);
		new++;
		h = h->next;
	}
	return (new);
}
