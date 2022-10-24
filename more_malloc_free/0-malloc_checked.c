#include "main.h"
/**
 * *malloc_checked - task0
 * @b: unsigned int
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int **a;
	unsigned int *c;

	c = malloc(sizeof(int) * b);
	a = &c;
	if (a == NULL)
		return (NULL);
	else
		return (a);
}
