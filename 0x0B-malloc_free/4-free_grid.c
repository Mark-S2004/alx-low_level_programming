#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Free a 2 dimensional grid
  * @grid: 2D grid
  * @height: Number of rows
  * Return: None
  */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
