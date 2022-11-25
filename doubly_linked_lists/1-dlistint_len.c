#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linkedlist
 * @h: const dlistint_t
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
