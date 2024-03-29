#include "lists.h"
/**
* delete_nodeint_at_index - function
* @head: double pointer to first node of list
* @index: index of node that should be deleted
*
* Description: function to dlete the node at index of a listint_t list
* Return: 1 is success, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (ptr = *head; index && ptr->next != NULL; index--, ptr = ptr->next)
		prev = ptr;
	if (index)
		return (-1);

	prev->next = prev->next->next;
	free(ptr);
	return (1);
}
