#include "dog.h"
/**
 * print_dog - task2
 * @d: char
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if (d->age < 0)
	{
		printf("nil");
	}
	else
	{
		printf("age: %f\n", d->age);
	}
	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("owner: (nil)");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
