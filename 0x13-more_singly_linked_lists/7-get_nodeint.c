#include "lists.h"
/**
* get_nodeint_at_index - function
* @head: pointer to first node of list
* @index: index of nodes starting at 0
*
* Description: function to return the nth node of listint_t
* Return: nth node or NULL if does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	if (i == 0)
		return (temp);
	if (i < index)
		return (temp);
	temp = head;
	return (temp->next);
}
