#include "lists.h"
/**
 * listint_len - returns the elements at the list.
 * @h: const listint_t
 * Return: The number of elements in the list.
**/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
