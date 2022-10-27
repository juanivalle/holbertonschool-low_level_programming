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
		printf("nill");
	}
	else
	{
		printf("%f\n", d->age);
	}
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("nill");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
