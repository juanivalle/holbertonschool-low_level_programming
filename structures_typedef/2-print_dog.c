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
	if (d->owner == NULL || d->age < 0)
	{
		printf("nill");
	}
	else
	{
		printf("%s\n", d->owner);
		printf("%f\n", d->age);
	}
	if (d->name == NULL)
	{
		printf("Name: (nill)");
	}
	else
	{
		printf("%s\n", d->name);
	}
}
