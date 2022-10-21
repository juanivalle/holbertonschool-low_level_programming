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
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	wh = malloc(sizeof(int) * height);
	if (wh == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		wh[a] = malloc(sizeof(int) * width);
		if (wh[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(wh[a]);
			}
			free(wh);
			return (NULL);
		}
		for (b = 0; b <= width; b++)
		{
			wh[a][b] = 0;
		}
	}
	return (wh);
}
