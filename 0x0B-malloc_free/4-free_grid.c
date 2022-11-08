#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory previously created by
 * alloc_grid
 *
 * @grid: Pointer to memory to free
 * @height: Height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
