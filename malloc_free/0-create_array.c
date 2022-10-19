#include "main.h"
/**
 * *create_array - task0
 * @size: unsigned int
 * @c: char
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *d;

	d = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (d != NULL)
	{
		for (n = 0; n < size; n++)
		{
			d[n] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (d);
}


