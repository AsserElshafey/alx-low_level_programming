#include "lists.h"
/**
* print_listint - function
* @h: string to print
*
* Description: Fnction to print all elements in listint_t
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
