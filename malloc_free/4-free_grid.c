#include "main.h"
/**
 *free_grid - task4
 *@grid: int
 *@height: int
 *Return: always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
