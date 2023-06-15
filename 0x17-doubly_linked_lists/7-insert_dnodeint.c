#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	if (tmp == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
