#include "search_algos.h"
/**
 * binary_search -searches a value in array of integers using the Binary search
 * @array: int
 * @size: size_t
 * @value: int
 * Return: The first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int inicio = 0, medio, pos;
	int final = size - 1;

	if (array == NULL)
		return (-1);
	while (inicio <= final)
	{
		medio = (inicio + final) / 2;
		printf("Searching in array: ");
		for (pos = inicio; pos <= final; pos++)
		{
			if (pos != inicio)
				printf(", %d", array[pos]);
			else
				printf("%d", array[pos]);
		}
			printf("\n");
			if (array[medio] == value)
			{
				pos = medio;
				return (pos);
			}
			else
			{
				if (value < array[medio])
					final = medio - 1;
				else
					inicio = medio + 1;
			}
	}
	return (-1);
}
