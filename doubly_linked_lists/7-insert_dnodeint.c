#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cop = *h, *new;
	unsigned int node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = cop;
		*h = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (cop == NULL || cop->next == NULL)
			return (NULL);

		cop = cop->next;
	}
	new->next = cop->next;
	if (cop != NULL)
	{
		while (cop->prev != NULL)
			cop = cop->prev;
	}
	cop->next = new;
	if (cop != NULL)
		cop->prev = new;
	*h = new;
	return (new);
}
