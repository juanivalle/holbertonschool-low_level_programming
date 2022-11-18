#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 *                of a listint_t list.
 * @head: A pointer the head of the list
 * @n: const int
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo, *ult;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
		return (NULL);
	if (*head == NULL)
		*head = nuevo;
	else
	{
		ult = *head;
		while (ult->next != NULL)
			ult = ult->next;
		ult->n = n;
	}

	return (*head);
}
