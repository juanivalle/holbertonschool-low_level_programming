#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list
 * @h: a dlistint_t;
 * Return: the number of nodes;
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
