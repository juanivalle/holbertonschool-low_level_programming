#include "main.h"
/**
 * **alloc_grid - task3
 * @width: int
 * @height: int
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int **wh;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	wh = malloc(sizeof(int *) * height);
	if (wh == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		wh[b] = malloc(sizeof(int) * width);
		if (wh[b] == NULL)
		{
			for (; b >= 0; b--)
			{
				free(wh[b]);
			}
			free(wh);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			wh[b][a] = 0;
		}
	}
	return (wh);
}
