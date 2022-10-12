#include "main.h"
/**
 * reverse_array - task4
 * @a: int
 * @n: int
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n / 2; b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
