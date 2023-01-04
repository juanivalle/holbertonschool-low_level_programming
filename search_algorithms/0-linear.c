#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integer (linear search)
 * @array: int
 * @size: size_t
 * @value: int
 * Return: the first index where value is located, in other case -1
 */
int linear_search(int *array, size_t size, int value)
{
	int pos;
	int largo = size;

	for (pos = 0; pos < largo; pos++)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
	}
	return (-1);
}	
