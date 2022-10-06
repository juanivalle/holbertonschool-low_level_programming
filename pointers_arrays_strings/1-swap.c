#include "main.h"
/**
 * swap_int - task1
 * @a: int
 * @b: int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
