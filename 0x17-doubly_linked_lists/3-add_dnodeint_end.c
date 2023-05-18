#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	while (last != NULL && last->next != NULL)
		last = last->next;
	if (last != NULL)
		last->next = new;
	else
		*head = new;
	new->prev = last;
	return (new);
}
