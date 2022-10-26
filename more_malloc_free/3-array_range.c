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
	int b, c;

	if (min > max)
		return (NULL);
	for (c = 0; c < (max - min); c++)
	{}
	a = malloc(sizeof(int) * (c + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; b <= c; c++)
	{
		a[b] = min++;
	}
	return (a);
}
