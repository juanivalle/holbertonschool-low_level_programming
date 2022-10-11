#include "main.h"
/**
 * print_array - task8
 * @a: int
 * @n: int
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	{
	printf("\n");
	}
}
