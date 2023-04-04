#include "lists.h"
/**
* free_listint - function
* @head: ptr to beginning of list
*
* Description: function to free list
* Return: 0
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head;

		head = head->next;
		free(temp);
	}
	free(head);
}
