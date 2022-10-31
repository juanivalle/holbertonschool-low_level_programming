#include "function_pointers.h"
/**
 * array_iterator - task1
 * @array: int
 * @size: size_t
 * @action: int
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
