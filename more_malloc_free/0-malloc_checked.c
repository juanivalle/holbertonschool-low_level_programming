#include "main.h"
/**
 * *malloc_checked - task0
 * @b: unsigned int
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	else
		return (c);
}
