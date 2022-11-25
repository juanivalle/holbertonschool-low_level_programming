#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: dlistint_t
 * @n: const int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo, *ult;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	nuevo->next = NULL;
	if (*head == NULL)
	{
		*head = nuevo;
	}
	else
	{
		ult = *head;
		while (ult->next != NULL)
			ult = ult->next;
		ult->next = nuevo;
	}

	return (*head);
}
