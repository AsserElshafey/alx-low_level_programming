#include "lists.h"
/**
* free_listint2 - function
* @head: ptr to ptr to beginning of list
*
* Description: function to free list
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);
		(*head) = temp;
	}
	head = NULL;
}
