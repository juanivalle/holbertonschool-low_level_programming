#include "lists.h"
/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list
 * @str: The string to be added to
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *doble;
	int len;
	list_t *nuevo, *ult;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
		return (NULL);
	doble = strdup(str);
	if (str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	nuevo->str = doble;
	nuevo->len = len;
	nuevo->next = NULL;

	if (*head == NULL)
		*head = nuevo;
	else
	{
		ult = *head;
		while (ult->next != NULL)
			ult = ult->next;
		ult->next = nuevo;
	}

	return (*head);
}
