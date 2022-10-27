#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - task5
 * @d: char
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
