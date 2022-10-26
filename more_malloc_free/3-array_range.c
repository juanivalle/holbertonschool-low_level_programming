#include "main.h"
/**
 * *array_range - task3
 * @min: int
 * @max: int
 * Return: always 0
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++)
	{
		a[b] = min++;
	}
	return (a);
}
